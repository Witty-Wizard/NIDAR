/*****************************************************************************
 * @file main.cpp
 * @brief Main entry point for the program
 * @author Witty Wizard
 * @date 2025-15-01
 *****************************************************************************/

/*****************************************************************************
 * Includes
 *****************************************************************************/
#include <iostream>
#include <Python.h>

int
main()
{
    PyStatus status;
    PyConfig config;
    PyConfig_InitPythonConfig(&config);
    FILE* fp = fopen("script.py", "r");

    status = Py_InitializeFromConfig(&config);
    if (PyStatus_Exception(status)) {
        goto exception;
    }
    PyConfig_Clear(&config);
    
    if (fp == nullptr) {
      std::cerr << "Failed to open script.py" << std::endl;
      exit(1);
    }
    PyRun_SimpleFile(fp, "./script.py");
    fclose(fp);
    if (Py_FinalizeEx() < 0) {
        exit(120);
    }
    return 0;

  exception:
     PyConfig_Clear(&config);
     Py_ExitStatusException(status);
}
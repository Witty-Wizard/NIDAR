.. NIDAR documentation master file, created by
   sphinx-quickstart on Tue Apr  8 21:27:17 2025.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

NIDAR documentation
###################

Welcome to the development process of NIDAR project.

In this I will go about how I made the Ground control station, integrated ML running
in it and then how to test it with a SITL simulation

Ground control station development setup
=========================================

First lets see how the Ground control station (GCS) development enviornment setup.

C++
^^^

I am using C++ as the language for development of this ground station, it allows me
to interact directly with the hardware.

I am using Cmake for my build tool, it manages all the C++ building and linking of the code.
for interacting with the drone I am going to use MAVLINK that is the industry standard when 
it comes to UAV. MAVSDK is a library that provides mavlink parser making life easier doing all 
the heavy lifting

QT
^^^
For rendering the UI I am using the QT framework. 

.. note::
   more on this later, for now the goal is to create a barebones cli based GCS

Python VM
^^^^^^^^^

I am going to use python as a scripting language for this project. It serves 2 major purposes.

1. Provide scripting for customised automation by the user
2. Use python for the image recognition part, by having it as a scripting language
   and embedding the python VM inside our application, we can directly run python code without
   requiring an installation

Embedding python in c
^^^^^^^^^^^^^^^^^^^^^
Let us do a simple exercise by embedding python in a C++ application, and printing "hello
world!" from a python script but my calling a C++ function.


.. toctree::
   :maxdepth: 2
   :caption: Contents:


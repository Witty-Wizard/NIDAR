# NIDAR Project

## Entry Point
Located at `src/main`

## Compiler
Uses `Clang` for its compiler.

## Build automation
Uses `CMake` and `ninja` for building the executable.

## Simulation
For simulation use the SITL docker image from PX4:

```sh
docker run --rm -it jonasvautherin/px4-gazebo-headless:1.15.3
```
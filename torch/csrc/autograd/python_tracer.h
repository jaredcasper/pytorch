#pragma once

#include <Python.h>
#include "torch/csrc/autograd/tracer.h"

PyObject * THPTracer_enter(PyObject *_unused, PyObject* args);
PyObject * THPTracer_exit(PyObject *_unused, PyObject* args);
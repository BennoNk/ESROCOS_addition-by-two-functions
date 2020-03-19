#!/usr/bin/python

from ctypes import CDLL
import time

def RunTest():
    taste_DLL = CDLL("./binary.c/binaries/x86_partition.so")
    taste_DLL.aadl_start()
    
RunTest()

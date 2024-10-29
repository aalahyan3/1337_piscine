#!/bin/bash
ls -l | awk 'FNR % 2 != 0'

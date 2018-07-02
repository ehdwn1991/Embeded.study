from cx_Freeze import setup, Executable

# Dependencies are automatically detected, but it might need
# fine tuning.
buildOptions = dict(packages = [], excludes = [])

import sys
base = 'Win32GUI' if sys.platform=='win32' else None

executables = [
    Executable('gui_exe.py', base=base, targetName = 'gui open')
]

setup(name='gui_build',
      version = '3.5',
      description = 'gui build',
      options = dict(build_exe = buildOptions),
      executables = executables)

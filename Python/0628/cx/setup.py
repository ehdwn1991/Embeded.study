# 터미널에서 python3 setup.py build 하면 된다.
# 그러면 build폴더가 생기는데 그냥 빌드 하면 실행파일이 생긴다.
# python3 setup.py bdist_dmg 하면 패키지 dmg 파일이 생긴다.
from cx_Freeze import setup, Executable

# Dependencies are automatically detected, but it might need
# fine tuning.
buildOptions = dict(packages = [], excludes = [])

import sys
base = 'Win32GUI' if sys.platform=='win32' else None

executables = [
    Executable('foo.py', base=base, targetName = 'foo')
]

setup(name='DJ',
      version = '3.5',
      description = 'Descroption',
      options = dict(build_exe = buildOptions),
      executables = executables)

for /L %%d in (0,1,9) do md test0%%d
for /L %%d in (10,1,20) do md test%%d
for /L %%d in (0,1,9) do move data.i%%d test0%%d\parity.inp
for /L %%d in (0,1,9) do move data.o%%d test0%%d\parity.out
for /L %%d in (10,1,20) do move data.i%%d test%%d\parity.inp
for /L %%d in (10,1,20) do move data.o%%d test%%d\parity.out
zip -r TestCase.zip test*
pause
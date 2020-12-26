function a=myRand(lowlim,highlim)
a=lowlim+rand(1,1000)*(highlim-lowlim);
histogram(a,50)
end
function output=echo_gen(input,fs,delay,amp)
DeltaT=1/fs;
num=round(delay/DeltaT);
signal1=[input; zeros(num,1)];
signal2=[zeros(num,1);input.*amp];
output=signal1+signal2;
if max(abs(output)) > 1
    output = output./max(abs(output));
end
end
function f=fibo(n)

if (~isscalar(n)||n<1||n~=fix(n))
    error('n must be a positive integer!')
end

f(1)=1;
f(2)=2;

for ii=3:n
    f(ii)=f(ii-2)+f(ii-1);
end

%%
% 
% $$e^{\pi i} + 1 = 0$$
% 

function [summa,index] = max_sum(v,n)
N = length(v);
vec=zeros(1,N-n+1);
if n > N
    summa = 0;
    index = -1;
    return
else
    for i = 1:(N-n+1)
    vec(i)=sum(v(i:(i+n-1)));
    end
summa = max(vec);
n1=find(vec==summa);
index=min(n1);
end


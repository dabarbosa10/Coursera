[row,col]=size(A);
for r=1:row
    for c=1:col
        P(r,c)=A(r,c)*A(r,c);
    end
end


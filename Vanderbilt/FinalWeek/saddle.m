function indices=saddle(M)
indices=[]; ind=1;
[rows,cols]=size(M);
for i=1:rows
    for j=1:cols
        if M(i,j)== max(M(i,1:cols)) && M(i,j)==min(M(1:rows,j))
            indices(ind,1)=i;
            indices(ind,2)=j; 
            ind=ind+1;
        end
    end
end

    
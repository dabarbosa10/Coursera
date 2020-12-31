function matrix=sparse2matrix(A)
%%SPARSE TO MATRIX FUNCTION
%%This function generates a sparse 
%%matrix from a cell containing all the
%%information.
size=A{1};
values=A{2};
M=zeros(size);
for i=1:size(1)
    for j=1:size(2)
        M(i,j)=values;
    end
end
L=length(A);
for j=(3):L
    v=A{j};
    M(v(1),v(2))=v(3);
end
matrix=M;

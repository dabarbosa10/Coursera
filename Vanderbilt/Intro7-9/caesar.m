function coded=caesar(v,s)
chag=circshift(char(32:126),-s);
code=double(v);
coded=chag(code-31);
end

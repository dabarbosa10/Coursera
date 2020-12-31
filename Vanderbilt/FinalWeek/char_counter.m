function charnum=char_counter(fname,character)

if ~ischar(character)
    charnum=-1;
    return
end

if isfile(fname)==1
    data=fileread(fname);
    if sum(data==character)~=0
        charnum=sum(data==character);
    else
        charnum=0;
    end
    
else
    charnum=-1;
    return;
end
function valid=valid_date(year,month,day)

m1=mod(year,1);
m2=mod(month,1);
m3=mod(day,1);

if nargin == 3
    if ~isscalar(year) || year < 1 || (m1~=0)
        valid = false;
        return
    elseif ~isscalar(month) || month < 1 || (m2~=0)||month>=13
        valid = false;
        return
    elseif ~isscalar(day) || day < 1 || (m3~=0)
        valid = false;
        return
    end
end


if mod(year,400)==0 || (mod(year,4)==0 && mod (year,100)~=0)
    if month==2 && day>=30
        valid=false;
        return
    elseif (month==1||month==3||month==5||month==7||month==8||month==10||month==12) && day>=32
        valid=false;
        return
    elseif (month==4||month==6||month==9||month==11)&&day>=31
        valid=false;
        return
    else
        valid=true;
        return
    end
end

if mod(year,400)~=0 || mod(year,4)~=0
    if month==2 && day>=29
        valid=false;
        return
    elseif (month==1||month==3||month==5||month==7||month==8||month==10||month==12) && day>=32
        valid=false;
        return 
    elseif (month==4||month==6||month==9||month==11)&&day>=31
        valid=false;
        return
    else
        valid=true;
        return
    end
end
    
   

end
   





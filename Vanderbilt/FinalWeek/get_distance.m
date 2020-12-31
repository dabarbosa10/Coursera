function distance=get_distance(char1,char2)

%%This function reads an 'xlsx' file
%%that contains different US cities and
%%calculates the distance between these 
%%two cities.

[~, ~, raw]=xlsread('Distances.xlsx');
rows=raw(1,:);
columns=raw(:,1);
rows{1,end+1}='no name';
columns{end+1,1}='no name';
count1=0;
count2=0;
for i=2:length(columns)
    if strcmp(columns{i},char1)
        count1=i;
        break;
    elseif i==338
        count1=338;
        break;
    end
    
end

for j=1:length(rows)
    if strcmp(rows{j},char2)
        count2=j;
        break;
    elseif j==338
        count2=338;
        break;
    end
end

if (count1==338 || count2==338)
    distance=-1;
else
    distance=raw{count2,count1};
end

   


end





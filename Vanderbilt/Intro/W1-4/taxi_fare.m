function fare=taxi_fare(d,t)
dis=5+2*ceil(d-1);
min=0.25*ceil(t);
fare=dis+min;
end
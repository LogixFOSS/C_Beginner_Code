
int dum;
for(ctr=0;ctr<4;ctr++)
{
for(ctr2=0;ctr2<(4-ctr);ctr2++)
{
if(array[ctr2]>array[ctr2+1])
{
dum=array[ctr2+1];
array[ctr2+1]=array[ctr2];
array[ctr2]=dum;

// switch elements;
/*
array[ctr2+1]=array[ctr2]+array[ctr2+1];
array[ctr2]=array[ctr2+1]-array[ctr2];
arrayy[ctr2+1]=array[ctr2+1]-array[ctr2];
*/
}

}
}
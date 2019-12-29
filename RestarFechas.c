#include <stdio.h>
int main(void){
   int len, dato;
   int dia, hora, min, seg, dia_, hora_, min_, seg_;
   int TotalSeg, TotalSeg_;
   scanf("%d", &len);
   while(len--){
       scanf("%d%d%d%d%d%d%d%d", &dia, &hora, &min, &seg, &dia_, &hora_, &min_, &seg_ );
       TotalSeg = (dia * 86400) + (hora * 3600) + (min * 60) + seg;
       TotalSeg_ = (dia_ * 86400) + (hora_ * 3600) + (min_ * 60) + seg_;
       TotalSeg_    -= TotalSeg;
       seg_         = TotalSeg_ % 60;
       TotalSeg_    /= 60;
       min_         = TotalSeg_ % 60;
       TotalSeg_    /= 60;
       hora_        = TotalSeg_ % 24;
       TotalSeg_    /= 24;
       dia_         = (int) TotalSeg_;
        printf("(%d %d %d %d)", dia_, hora_, min_, seg_); 
   }
    
}

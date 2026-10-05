#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D2358();
void *fn_800D5E28();
void fn_800D5E64();
void fn_800D6058();
extern char lbl_8048A6BC[];
extern char lbl_8055ED64[8];
extern void *lbl_80562F74;
extern void *lbl_805630F0;
void fn_800D5FBC();
void *fn_800D6030();
void *fn_800D6050();
}
extern "C" {
void fn_800D5F94(){
 fn_80066188((int)fn_800D5FBC);
}
void fn_800D5FBC(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_805630F0,(int)fn_800D2358,(int)fn_800D6050,(int)fn_800D6030,(int)lbl_8048A6BC,96,(int)fn_800D5E64,(int)fn_800D6058,0,(int)lbl_8055ED64);
}
void *fn_800D6030(){return fn_800D5E28();}
void *fn_800D6050(){return lbl_80562F74;}
}
#pragma pop

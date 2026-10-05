#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80023748();
void *fn_800237EC();
void fn_8002CDF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_8046527C[];
extern void *lbl_805614E4;
extern void *lbl_80561978;
void fn_8002CD58();
void fn_8002CD80();
void *fn_8002CDEC();
}
extern "C" {
void *fn_8002CD1C(){
 if(!lbl_80561978 || !(reinterpret_cast<unsigned int *>(lbl_80561978)[0x24/4]&4)) fn_8002CD58();
 return lbl_80561978;
}
void fn_8002CD58(){
 fn_80066188((int)fn_8002CD80);
}
void fn_8002CD80(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_80561978,(int)fn_80023748,(int)fn_8002CDEC,(int)fn_800237EC,(int)lbl_8046527C,40,0,(int)fn_8002CDF4,0,0);
}
void *fn_8002CDEC(){return lbl_805614E4;}
}
#pragma pop

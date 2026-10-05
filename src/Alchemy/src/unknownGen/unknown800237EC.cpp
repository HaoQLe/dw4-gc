#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_80023940();
void *fn_80023A30();
void *fn_8002CD1C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_804631F8[];
extern char lbl_80463204[];
extern void *lbl_805614E8;
void *fn_80023844();
void fn_80023880();
void fn_800238A8();
void *fn_80023920();
}
extern "C" {
void *fn_800237EC(){return fn_8002CD1C();}
void *fn_8002380C(void *object){
 fn_80023880();
 return fn_8006546C(lbl_805614E8,object);
}
void *fn_80023844(){
 if(!lbl_805614E8 || !(reinterpret_cast<unsigned int *>(lbl_805614E8)[0x24/4]&4)) fn_80023880();
 return lbl_805614E8;
}
void fn_80023880(){
 fn_80066188((int)fn_800238A8);
}
void fn_800238A8(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_805614E8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80023920,(int)lbl_80463204,16,0,(int)fn_80023940,(int)fn_80023A30,(int)lbl_804631F8);
}
void *fn_80023920(){return fn_80023844();}
}
#pragma pop

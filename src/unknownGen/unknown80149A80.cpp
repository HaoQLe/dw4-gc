#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_80149C0C();
void fn_8014A738();
extern char lbl_8049EF60[];
extern char lbl_804A6BF0[];
extern char lbl_804A8F78[];
extern char lbl_804A8FDC[];
extern void *lbl_805642A8;
extern void *lbl_805642D4;
void *fn_80149AB8();
void *fn_80149AF4();
void fn_80149B4C();
void fn_80149B74();
void *fn_80149BE4();
void *fn_80149C04();
}
struct UnknownGenObject80149AF4 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_80149A80(void *object){
 fn_80149B4C();
 return fn_8006546C(lbl_805642A8,object);
}
void *fn_80149AB8(){
 if(!lbl_805642A8 || !(reinterpret_cast<unsigned int *>(lbl_805642A8)[0x24/4]&4)) fn_80149B4C();
 return lbl_805642A8;
}
void *fn_80149AF4(){
 UnknownGenObject80149AF4 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8F78;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149B4C(){
 fn_80066188((int)fn_80149B74);
}
void fn_80149B74(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642A8,(int)fn_8014A738,(int)fn_80149C04,(int)fn_80149BE4,(int)lbl_8049EF60,32,(int)fn_80149AF4,(int)fn_80149C0C,0,0);
}
void *fn_80149BE4(){return fn_80149AB8();}
void *fn_80149C04(){return lbl_805642D4;}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801B0BD8();
extern char lbl_804AC9C8[];
extern char lbl_804B39E8[];
extern void *lbl_805621F4;
extern void *lbl_805648D0;
extern void *lbl_805648D4;
void *fn_801B0940();
void *fn_801B097C();
void fn_801B09BC();
void fn_801B09E4();
void *fn_801B0A4C();
}
struct UnknownGenObject801B097C_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *fn_801B08CC(void *object){
 fn_801B09BC();
 return fn_8006546C(lbl_805648D0,object);
}
void *fn_801B0904(){
 if(!lbl_805648D0) lbl_805648D0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805648D0;
}
void *fn_801B0940(){
 if(!lbl_805648D0 || !(reinterpret_cast<unsigned int *>(lbl_805648D0)[0x24/4]&4)) fn_801B09BC();
 return lbl_805648D0;
}
void *fn_801B097C(){
 UnknownGenObject801B097C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B39E8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B09BC(){
 fn_80066188((int)fn_801B09E4);
}
void fn_801B09E4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648D0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801B0A4C,(int)lbl_804AC9C8,8,(int)fn_801B097C,0,0,0);
}
void *fn_801B0A4C(){return fn_801B0940();}
void *fn_801B0A6C(void *object){
 fn_801B0BD8();
 return fn_8006546C(lbl_805648D4,object);
}
void *fn_801B0AA4(){
 if(!lbl_805648D4 || !(reinterpret_cast<unsigned int *>(lbl_805648D4)[0x24/4]&4)) fn_801B0BD8();
 return lbl_805648D4;
}
}
#pragma pop

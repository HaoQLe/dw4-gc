#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8012FC48();
void fn_80149318();
extern char lbl_8049EED0[];
extern char lbl_804A9160[];
extern void *lbl_80564280;
void *fn_801491E4();
void *fn_80149220();
void fn_80149260();
void fn_80149288();
void *fn_801492F8();
}
struct UnknownGenObject80149220_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801491AC(void *object){
 fn_80149260();
 return fn_8006546C(lbl_80564280,object);
}
void *fn_801491E4(){
 if(!lbl_80564280 || !(reinterpret_cast<unsigned int *>(lbl_80564280)[0x24/4]&4)) fn_80149260();
 return lbl_80564280;
}
void *fn_80149220(){
 UnknownGenObject80149220_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A9160;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149260(){
 fn_80066188((int)fn_80149288);
}
void fn_80149288(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564280,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801492F8,(int)lbl_8049EED0,24,(int)fn_80149220,(int)fn_80149318,0,0);
}
void *fn_801492F8(){return fn_801491E4();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *fn_800D7230();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8048867C[];
extern char lbl_80494088[];
extern char lbl_804940EC[];
extern char lbl_8055EAA8[8];
extern void *lbl_805621F4;
extern void *lbl_80562DB8;
void *fn_800CF714();
void *fn_800CF750();
void fn_800CF7C0();
void fn_800CF7E8();
void *fn_800CF854();
}
struct UnknownGenObject800CF750 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800CF680(){return fn_800D7230();}
void *fn_800CF6A0(void *object){
 fn_800CF7C0();
 return fn_8006546C(lbl_80562DB8,object);
}
void *fn_800CF6D8(){
 if(!lbl_80562DB8) lbl_80562DB8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562DB8;
}
void *fn_800CF714(){
 if(!lbl_80562DB8 || !(reinterpret_cast<unsigned int *>(lbl_80562DB8)[0x24/4]&4)) fn_800CF7C0();
 return lbl_80562DB8;
}
void *fn_800CF750(){
 UnknownGenObject800CF750 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804940EC;
 object.unknown00=lbl_80494088;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CF7C0(){
 fn_80066188((int)fn_800CF7E8);
}
void fn_800CF7E8(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562DB8,(int)fn_8002907C,(int)fn_80024180,(int)fn_800CF854,(int)lbl_8048867C,20,(int)fn_800CF750,0,0,(int)lbl_8055EAA8);
}
void *fn_800CF854(){return fn_800CF714();}
}
#pragma pop

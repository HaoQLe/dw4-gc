#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800BC19C();
extern char lbl_8047A168[];
extern char lbl_8047A394[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562A9C;
void *fn_800BC050();
void *fn_800BC08C();
void fn_800BC0E4();
void fn_800BC10C();
void *fn_800BC17C();
}
struct UnknownGenObject800BC08C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800BC018(void *object){
 fn_800BC0E4();
 return fn_8006546C(lbl_80562A9C,object);
}
void *fn_800BC050(){
 if(!lbl_80562A9C || !(reinterpret_cast<unsigned int *>(lbl_80562A9C)[0x24/4]&4)) fn_800BC0E4();
 return lbl_80562A9C;
}
void *fn_800BC08C(){
 UnknownGenObject800BC08C object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A394;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC0E4(){
 fn_80066188((int)fn_800BC10C);
}
void fn_800BC10C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A9C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BC17C,(int)lbl_8047A168,20,(int)fn_800BC08C,(int)fn_800BC19C,0,0);
}
void *fn_800BC17C(){return fn_800BC050();}
}
#pragma pop

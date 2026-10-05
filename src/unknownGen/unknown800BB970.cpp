#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065DBC(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800BBB5C();
void fn_800BCB68();
void fn_800BCC14();
extern char lbl_8047A0E8[];
extern char lbl_8047D578[];
extern char lbl_8047D5F8[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_80562A74;
void *fn_800BBA10();
void *fn_800BBA4C();
void fn_800BBAA4();
void fn_800BBACC();
void *fn_800BBB3C();
}
struct UnknownGenObject800BBA4C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_800BB970(){
 fn_800BCB68();
 fn_80065DBC((int)fn_800BCC14);
}
void *fn_800BB99C(void *object){
 fn_800BBAA4();
 return fn_8006546C(lbl_80562A74,object);
}
void *fn_800BB9D4(){
 if(!lbl_80562A74) lbl_80562A74=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A74;
}
void *fn_800BBA10(){
 if(!lbl_80562A74 || !(reinterpret_cast<unsigned int *>(lbl_80562A74)[0x24/4]&4)) fn_800BBAA4();
 return lbl_80562A74;
}
void *fn_800BBA4C(){
 UnknownGenObject800BBA4C object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D5F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BBAA4(){
 fn_80066188((int)fn_800BBACC);
}
void fn_800BBACC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A74,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BBB3C,(int)lbl_8047A0E8,16,(int)fn_800BBA4C,(int)fn_800BBB5C,0,0);
}
void *fn_800BBB3C(){return fn_800BBA10();}
}
#pragma pop

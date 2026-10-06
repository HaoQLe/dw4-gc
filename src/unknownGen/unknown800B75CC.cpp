#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800ABEF8();
void fn_800AC034();
void *fn_800AC294();
void fn_800B7850();
void fn_800BB228();
extern char lbl_80479814[];
extern char lbl_80479830[];
extern char lbl_8047C874[];
extern char lbl_8047C8D8[];
extern char lbl_8047D514[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805628E0;
extern void *lbl_805628E4;
void *fn_800B75CC();
void *fn_800B7608();
void fn_800B7654();
void fn_800B767C();
void *fn_800B76E4();
void *fn_800B7704();
void *fn_800B7740();
void fn_800B7798();
void fn_800B77C0();
void *fn_800B7830();
}
struct UnknownGenObject800B7608_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject800B7740_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B75CC(){
 if(!lbl_805628E0 || !(reinterpret_cast<unsigned int *>(lbl_805628E0)[0x24/4]&4)) fn_800B7654();
 return lbl_805628E0;
}
void *fn_800B7608(){
 UnknownGenObject800B7608_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D514;
 object.unknown00=lbl_8047C874;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B7654(){
 fn_80066188((int)fn_800B767C);
}
void fn_800B767C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805628E0,(int)fn_800BB228,(int)fn_800ABEF8,(int)fn_800B76E4,(int)lbl_80479814,8,(int)fn_800B7608,0,0,0);
}
void *fn_800B76E4(){return fn_800B75CC();}
void *fn_800B7704(){
 if(!lbl_805628E4 || !(reinterpret_cast<unsigned int *>(lbl_805628E4)[0x24/4]&4)) fn_800B7798();
 return lbl_805628E4;
}
void *fn_800B7740(){
 UnknownGenObject800B7740_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C8D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B7798(){
 fn_80066188((int)fn_800B77C0);
}
void fn_800B77C0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805628E4,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B7830,(int)lbl_80479830,24,(int)fn_800B7740,(int)fn_800B7850,0,0);
}
void *fn_800B7830(){return fn_800B7704();}
}
#pragma pop

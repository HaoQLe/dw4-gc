#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC0B8();
void fn_800B7AD8();
void fn_800BB858();
extern char lbl_80479844[];
extern char lbl_8047C960[];
extern char lbl_8047D578[];
extern char lbl_8055E4D8[8];
extern void *lbl_805621F4;
extern void *lbl_805628F0;
void *fn_800B794C();
void *fn_800B7988();
void fn_800B7A1C();
void fn_800B7A44();
void *fn_800B7AB8();
}
struct UnknownGenRoot800B7988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B7988(){fn_8006665C(this);}
};
struct UnknownGenObject800B7988 : UnknownGenRoot800B7988 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B7988(){unknown00=lbl_8047C960;}
};
extern "C" {
void *fn_800B78D8(void *object){
 fn_800B7A1C();
 return fn_8006546C(lbl_805628F0,object);
}
void *fn_800B7910(){
 if(!lbl_805628F0) lbl_805628F0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805628F0;
}
void *fn_800B794C(){
 if(!lbl_805628F0 || !(reinterpret_cast<unsigned int *>(lbl_805628F0)[0x24/4]&4)) fn_800B7A1C();
 return lbl_805628F0;
}
void *fn_800B7988(){
 UnknownGenObject800B7988 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047C960;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B7A1C(){
 fn_80066188((int)fn_800B7A44);
}
void fn_800B7A44(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805628F0,(int)fn_800BB858,(int)fn_800AC0B8,(int)fn_800B7AB8,(int)lbl_80479844,16,(int)fn_800B7988,(int)fn_800B7AD8,0,(int)lbl_8055E4D8);
}
void *fn_800B7AB8(){return fn_800B794C();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B488C();
void fn_800C17B4();
void *fn_800C1848();
extern char lbl_80479100[];
extern char lbl_80479110[];
extern char lbl_8047BDE8[];
extern char lbl_8047BE68[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E360[8];
extern char lbl_8055E370[8];
extern char lbl_8055E378[8];
extern char lbl_8055E380[8];
extern char lbl_8055E388[4];
extern char lbl_8055E38C[4];
extern char lbl_8055E390[4];
extern char lbl_8055E394[4];
extern void *lbl_805621F4;
extern void *lbl_80562774;
extern void *lbl_80562780;
extern void *lbl_80562788;
extern char lbl_8056681C[4];
void *fn_800B4418();
void *fn_800B4454();
void fn_800B44AC();
void fn_800B44D4();
void *fn_800B4544();
void fn_800B4564();
void *fn_800B461C();
void *fn_800B4658();
void fn_800B46B0();
void fn_800B46D8();
void *fn_800B4748();
void fn_800B4768();
}
struct UnknownGenObject800B4454_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4658_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_800B43D8(){return fn_800C17B4();}
void *fn_800B43F8(){return fn_800C1848();}
void *fn_800B4418(){
 if(!lbl_80562774 || !(reinterpret_cast<unsigned int *>(lbl_80562774)[0x24/4]&4)) fn_800B44AC();
 return lbl_80562774;
}
void *fn_800B4454(){
 UnknownGenObject800B4454_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BDE8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B44AC(){
 fn_80066188((int)fn_800B44D4);
}
void fn_800B44D4(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562774,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B4544,(int)lbl_80479100,20,(int)fn_800B4454,(int)fn_800B4564,0,0);
}
void *fn_800B4544(){return fn_800B4418();}
void fn_800B4564(){
 void *value0=lbl_80562774;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E360,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8056681C+0)));
 fn_800659C0(value0,lbl_8055E370,lbl_8055E378,lbl_8055E380,value1);
}
void *fn_800B45E0(){
 if(!lbl_80562780) lbl_80562780=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562780;
}
void *fn_800B461C(){
 if(!lbl_80562780 || !(reinterpret_cast<unsigned int *>(lbl_80562780)[0x24/4]&4)) fn_800B46B0();
 return lbl_80562780;
}
void *fn_800B4658(){
 UnknownGenObject800B4658_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BE68;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B46B0(){
 fn_80066188((int)fn_800B46D8);
}
void fn_800B46D8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562780,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B4748,(int)lbl_80479110,16,(int)fn_800B4658,(int)fn_800B4768,0,0);
}
void *fn_800B4748(){return fn_800B461C();}
void fn_800B4768(){
 void *meta=lbl_80562780;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055E388,1);
 fn_8003EC68(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055E38C,lbl_8055E390,lbl_8055E394,field);
}
void *fn_800B47E4(){
 if(!lbl_80562788 || !(reinterpret_cast<unsigned int *>(lbl_80562788)[0x24/4]&4)) fn_800B488C();
 return lbl_80562788;
}
}
#pragma pop

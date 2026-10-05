#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
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
void fn_800B9918();
extern char lbl_80479BCC[];
extern char lbl_80479BE0[];
extern char lbl_8047D0A8[];
extern char lbl_8047D12C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E610[4];
extern char lbl_8055E614[4];
extern char lbl_8055E618[4];
extern char lbl_8055E61C[4];
extern void *lbl_805621F4;
extern void *lbl_805629A0;
extern void *lbl_805629A8;
void *fn_800B95CC();
void *fn_800B9608();
void fn_800B9660();
void fn_800B9688();
void *fn_800B96F8();
void fn_800B9718();
void *fn_800B97CC();
void *fn_800B9808();
void fn_800B9860();
void fn_800B9888();
void *fn_800B98F8();
}
struct UnknownGenObject800B9608 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9808 {
 void *unknown00;
 char unknown04[68];
};
extern "C" {
void *fn_800B9590(){
 if(!lbl_805629A0) lbl_805629A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805629A0;
}
void *fn_800B95CC(){
 if(!lbl_805629A0 || !(reinterpret_cast<unsigned int *>(lbl_805629A0)[0x24/4]&4)) fn_800B9660();
 return lbl_805629A0;
}
void *fn_800B9608(){
 UnknownGenObject800B9608 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D0A8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9660(){
 fn_80066188((int)fn_800B9688);
}
void fn_800B9688(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629A0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B96F8,(int)lbl_80479BCC,16,(int)fn_800B9608,(int)fn_800B9718,0,0);
}
void *fn_800B96F8(){return fn_800B95CC();}
void fn_800B9718(){
 void *meta=lbl_805629A0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055E610,1);
 fn_8003EC68(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055E614,lbl_8055E618,lbl_8055E61C,field);
}
void *fn_800B9794(void *object){
 fn_800B9860();
 return fn_8006546C(lbl_805629A8,object);
}
void *fn_800B97CC(){
 if(!lbl_805629A8 || !(reinterpret_cast<unsigned int *>(lbl_805629A8)[0x24/4]&4)) fn_800B9860();
 return lbl_805629A8;
}
void *fn_800B9808(){
 UnknownGenObject800B9808 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D12C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9860(){
 fn_80066188((int)fn_800B9888);
}
void fn_800B9888(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629A8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B98F8,(int)lbl_80479BE0,72,(int)fn_800B9808,(int)fn_800B9918,0,0);
}
void *fn_800B98F8(){return fn_800B97CC();}
}
#pragma pop

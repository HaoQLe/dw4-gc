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
void fn_80075AC4(void *,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B9918();
void fn_800BDAB8(int);
void fn_80126CF0(void *,void *);
extern char lbl_80479BB0[];
extern char lbl_80479BCC[];
extern char lbl_80479BE0[];
extern char lbl_8047D024[];
extern char lbl_8047D0A8[];
extern char lbl_8047D12C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E5F0[8];
extern char lbl_8055E5F8[8];
extern char lbl_8055E600[8];
extern char lbl_8055E608[8];
extern char lbl_8055E610[4];
extern char lbl_8055E614[4];
extern char lbl_8055E618[4];
extern char lbl_8055E61C[4];
extern void *lbl_805621F4;
extern void *lbl_80562994;
extern void *lbl_805629A0;
extern void *lbl_805629A8;
extern char lbl_80566810[4];
void *fn_800B9384();
void *fn_800B93C0();
void fn_800B9418();
void fn_800B9440();
void *fn_800B94B0();
void fn_800B94D0();
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
struct UnknownGenObject800B93C0_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenL800B94D0_8 {
 float m08;
 float m0C;
 float m10;
 float m14;
};
struct UnknownGenObject800B9608_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9808_0 {
 void *unknown00;
 char unknown04[68];
};
extern "C" {
void *fn_800B9310(void *object){
 fn_800B9418();
 return fn_8006546C(lbl_80562994,object);
}
void *fn_800B9348(){
 if(!lbl_80562994) lbl_80562994=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562994;
}
void *fn_800B9384(){
 if(!lbl_80562994 || !(reinterpret_cast<unsigned int *>(lbl_80562994)[0x24/4]&4)) fn_800B9418();
 return lbl_80562994;
}
void *fn_800B93C0(){
 UnknownGenObject800B93C0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D024;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9418(){
 fn_80066188((int)fn_800B9440);
}
void fn_800B9440(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562994,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B94B0,(int)lbl_80479BB0,32,(int)fn_800B93C0,(int)fn_800B94D0,0,0);
}
void *fn_800B94B0(){return fn_800B9384();}
void fn_800B94D0(){
 UnknownGenL800B94D0_8 local0;
 void *value0=lbl_80562994;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E5F0,2);
 void *value2=fn_800658E4(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_80566810+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_80566810+0));
 local0.m10=*reinterpret_cast<float *>((lbl_80566810+0));
 local0.m14=*reinterpret_cast<float *>((lbl_80566810+0));
 fn_80126CF0(value2,&local0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800BDAB8;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80075AC4(value3,-1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 fn_800659C0(value0,lbl_8055E5F8,lbl_8055E600,lbl_8055E608,value1);
}
void *fn_800B9590(){
 if(!lbl_805629A0) lbl_805629A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805629A0;
}
void *fn_800B95CC(){
 if(!lbl_805629A0 || !(reinterpret_cast<unsigned int *>(lbl_805629A0)[0x24/4]&4)) fn_800B9660();
 return lbl_805629A0;
}
void *fn_800B9608(){
 UnknownGenObject800B9608_0 object;
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
 UnknownGenObject800B9808_0 object;
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

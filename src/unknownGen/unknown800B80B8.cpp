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
void fn_800B8608();
extern char lbl_804798C4[];
extern char lbl_804798DC[];
extern char lbl_804798F0[];
extern char lbl_8047CB68[];
extern char lbl_8047CBEC[];
extern char lbl_8047CC70[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E538[4];
extern char lbl_8055E53C[4];
extern char lbl_8055E540[4];
extern char lbl_8055E544[4];
extern char lbl_8055E548[4];
extern char lbl_8055E54C[4];
extern char lbl_8055E550[4];
extern char lbl_8055E554[4];
extern void *lbl_805621F4;
extern void *lbl_80562914;
extern void *lbl_8056291C;
extern void *lbl_80562924;
void *fn_800B80F4();
void *fn_800B8130();
void fn_800B8188();
void fn_800B81B0();
void *fn_800B8220();
void fn_800B8240();
void *fn_800B82F4();
void *fn_800B8330();
void fn_800B8388();
void fn_800B83B0();
void *fn_800B8420();
void fn_800B8440();
void *fn_800B84BC();
void *fn_800B84F8();
void fn_800B8550();
void fn_800B8578();
void *fn_800B85E8();
}
struct UnknownGenObject800B8130_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8330_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B84F8_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B80B8(){
 if(!lbl_80562914) lbl_80562914=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562914;
}
void *fn_800B80F4(){
 if(!lbl_80562914 || !(reinterpret_cast<unsigned int *>(lbl_80562914)[0x24/4]&4)) fn_800B8188();
 return lbl_80562914;
}
void *fn_800B8130(){
 UnknownGenObject800B8130_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CB68;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8188(){
 fn_80066188((int)fn_800B81B0);
}
void fn_800B81B0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562914,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B8220,(int)lbl_804798C4,16,(int)fn_800B8130,(int)fn_800B8240,0,0);
}
void *fn_800B8220(){return fn_800B80F4();}
void fn_800B8240(){
 void *meta=lbl_80562914;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055E538,1);
 fn_8003EC68(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055E53C,lbl_8055E540,lbl_8055E544,field);
}
void *fn_800B82BC(void *object){
 fn_800B8388();
 return fn_8006546C(lbl_8056291C,object);
}
void *fn_800B82F4(){
 if(!lbl_8056291C || !(reinterpret_cast<unsigned int *>(lbl_8056291C)[0x24/4]&4)) fn_800B8388();
 return lbl_8056291C;
}
void *fn_800B8330(){
 UnknownGenObject800B8330_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CBEC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8388(){
 fn_80066188((int)fn_800B83B0);
}
void fn_800B83B0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056291C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B8420,(int)lbl_804798DC,16,(int)fn_800B8330,(int)fn_800B8440,0,0);
}
void *fn_800B8420(){return fn_800B82F4();}
void fn_800B8440(){
 void *meta=lbl_8056291C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055E548,1);
 fn_8003EC68(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055E54C,lbl_8055E550,lbl_8055E554,field);
}
void *fn_800B84BC(){
 if(!lbl_80562924 || !(reinterpret_cast<unsigned int *>(lbl_80562924)[0x24/4]&4)) fn_800B8550();
 return lbl_80562924;
}
void *fn_800B84F8(){
 UnknownGenObject800B84F8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CC70;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8550(){
 fn_80066188((int)fn_800B8578);
}
void fn_800B8578(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562924,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B85E8,(int)lbl_804798F0,16,(int)fn_800B84F8,(int)fn_800B8608,0,0);
}
void *fn_800B85E8(){return fn_800B84BC();}
}
#pragma pop

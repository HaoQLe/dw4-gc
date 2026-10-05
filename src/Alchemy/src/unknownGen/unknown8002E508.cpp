#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void fn_8002E3B8();
void fn_8002EA94();
void fn_800535B8(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_8046543C[];
extern char lbl_80465450[];
extern char lbl_80471914[];
extern char lbl_8047236C[];
extern char lbl_80472FA0[];
extern char lbl_80475A98[];
extern char lbl_80475AFC[];
extern char lbl_80475B60[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D3CC[8];
extern char lbl_8055D3D4[4];
extern char lbl_8055D3D8[4];
extern char lbl_8055D3DC[4];
extern char lbl_8055D3E0[4];
extern char lbl_8055D3E4[8];
extern void *lbl_805619E0;
extern void *lbl_805619E8;
extern void *lbl_805619EC;
extern void *lbl_805619F4;
extern void *lbl_805619F8;
extern void *lbl_805621F4;
void *fn_8002E540();
void *fn_8002E57C();
void fn_8002E614();
void fn_8002E63C();
void *fn_8002E6B0();
void *fn_8002E6D0();
void fn_8002E6D8();
void *fn_8002E860();
void *fn_8002E89C();
void fn_8002E90C();
void fn_8002E934();
void *fn_8002E9A0();
}
struct UnknownGenObject8002E57C {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject8002E57C(){unknown00=lbl_8047236C;unknown00=lbl_80475B60;unknown00=lbl_80471914;}
};
struct UnknownGenObject8002E89C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8002E508(void *object){
 fn_8002E614();
 return fn_8006546C(lbl_805619E8,object);
}
void *fn_8002E540(){
 if(!lbl_805619E8 || !(reinterpret_cast<unsigned int *>(lbl_805619E8)[0x24/4]&4)) fn_8002E614();
 return lbl_805619E8;
}
void *fn_8002E57C(){
 UnknownGenObject8002E57C object;
 fn_800535B8(&object);
 object.unknown00=lbl_8047236C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002E614(){
 fn_80066188((int)fn_8002E63C);
}
void fn_8002E63C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805619E8,(int)fn_8002E3B8,(int)fn_8002E6D0,(int)fn_8002E6B0,(int)lbl_8046543C,56,(int)fn_8002E57C,(int)fn_8002E6D8,0,(int)lbl_8055D3CC);
}
void *fn_8002E6B0(){return fn_8002E540();}
void *fn_8002E6D0(){return lbl_805619E0;}
void fn_8002E6D8(){
 void *meta=lbl_805619E8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D3D4,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D3D8,lbl_8055D3DC,lbl_8055D3E0,field);
}
void fn_8002E754(){
 if(!lbl_805619EC){
  void *object=(lbl_805619EC=fn_8006546C(lbl_805619E8,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805619EC));
   reinterpret_cast<short *>(lbl_805619EC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805619EC);
  }
 }
}
void *fn_8002E7EC(void *object){
 fn_8002E90C();
 return fn_8006546C(lbl_805619F4,object);
}
void *fn_8002E824(){
 if(!lbl_805619F4) lbl_805619F4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805619F4;
}
void *fn_8002E860(){
 if(!lbl_805619F4 || !(reinterpret_cast<unsigned int *>(lbl_805619F4)[0x24/4]&4)) fn_8002E90C();
 return lbl_805619F4;
}
void *fn_8002E89C(){
 UnknownGenObject8002E89C object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80475AFC;
 object.unknown00=lbl_80475A98;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002E90C(){
 fn_80066188((int)fn_8002E934);
}
void fn_8002E934(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805619F4,(int)fn_8002907C,(int)fn_80024180,(int)fn_8002E9A0,(int)lbl_80465450,20,(int)fn_8002E89C,0,0,(int)lbl_8055D3E4);
}
void *fn_8002E9A0(){return fn_8002E860();}
void *fn_8002E9C0(){
 if(!lbl_805619F8 || !(reinterpret_cast<unsigned int *>(lbl_805619F8)[0x24/4]&4)) fn_8002EA94();
 return lbl_805619F8;
}
}
#pragma pop

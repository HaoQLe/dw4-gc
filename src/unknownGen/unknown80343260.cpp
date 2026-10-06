#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void *fn_80342F9C();
void *fn_80343158();
void *fn_803431A8();
void fn_803431F4();
void fn_80343770();
void fn_803438F4();
extern char lbl_804551A4[];
extern char lbl_804551B8[];
extern char lbl_804551E0[];
extern char lbl_804E3D30[];
extern char lbl_804E3D34[];
extern char lbl_804E3D38[];
extern char lbl_804E3D3C[];
extern char lbl_804E3D40[];
extern char lbl_804E3D44[];
extern char lbl_804E3D48[];
extern char lbl_804E3D4C[];
extern char lbl_80536750[];
extern void *lbl_80536754;
extern void *lbl_8053675C;
extern void *lbl_80536764;
extern void *lbl_805621F4;
void fn_80343288();
void *fn_803432F4();
void *fn_80343314();
void fn_80343360();
void fn_80343388();
void *fn_803433F8();
void fn_80343418();
void *fn_80343498();
void fn_803434E4();
void fn_8034350C();
void *fn_8034357C();
void fn_8034359C();
}
extern "C" {
void fn_80343260(){
 fn_80066188((int)fn_80343288);
}
void fn_80343288(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536750,(int)fn_80343388,(int)fn_80343158,(int)fn_803432F4,(int)lbl_804551A4,28,(int)fn_803431F4,0,0,0);
}
void *fn_803432F4(){return fn_803431A8();}
void *fn_80343314(){
 if(!lbl_80536754 || !(reinterpret_cast<unsigned int *>(lbl_80536754)[0x24/4]&4)) fn_80343360();
 return lbl_80536754;
}
void fn_80343360(){
 fn_80066188((int)fn_80343388);
}
void fn_80343388(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80536754,(int)fn_8034350C,(int)fn_80342F9C,(int)fn_803433F8,(int)lbl_804551B8,28,0,(int)fn_80343418,0,0);
}
void *fn_803433F8(){return fn_80343314();}
void fn_80343418(){
 void *meta=lbl_80536754;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D30,0x1);
 fn_800659C0(meta,lbl_804E3D34,lbl_804E3D38,lbl_804E3D3C,field);
}
void *fn_80343498(){
 if(!lbl_8053675C || !(reinterpret_cast<unsigned int *>(lbl_8053675C)[0x24/4]&4)) fn_803434E4();
 return lbl_8053675C;
}
void fn_803434E4(){
 fn_80066188((int)fn_8034350C);
}
void fn_8034350C(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_8053675C,(int)fn_803438F4,(int)fn_803425BC,(int)fn_8034357C,(int)lbl_804551E0,24,0,(int)fn_8034359C,0,0);
}
void *fn_8034357C(){return fn_80343498();}
void fn_8034359C(){
 void *meta=lbl_8053675C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D40,0x1);
 fn_800659C0(meta,lbl_804E3D44,lbl_804E3D48,lbl_804E3D4C,field);
}
void *fn_8034361C(void *object){
 fn_80343770();
 return fn_8006546C(lbl_80536764,object);
}
void *fn_8034365C(){
 if(!lbl_80536764) lbl_80536764=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536764;
}
void *fn_803436B0(){
 if(!lbl_80536764 || !(reinterpret_cast<unsigned int *>(lbl_80536764)[0x24/4]&4)) fn_80343770();
 return lbl_80536764;
}
}
#pragma pop

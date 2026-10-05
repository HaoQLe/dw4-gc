#include "unknown800496E8.h"
#pragma push
#pragma auto_inline off
extern "C" {
int strcmp(const char *,const char *);
const char *strstr(const char *,const char *);
void *memset(void *,int,unsigned int);
}
extern "C" {
extern char lbl_804662AC[],lbl_804662C4[],lbl_80466354[],lbl_804663C8[],lbl_804663D8[],lbl_804663E4[],lbl_804663F0[],lbl_804663FC[],lbl_80466408[],lbl_80466418[],lbl_80466424[],lbl_80466434[],lbl_80466444[],lbl_80466450[],lbl_8046645C[],lbl_8046646C[],lbl_8046647C[],lbl_8046648C[],lbl_80466498[],lbl_804664B8[],lbl_8046657C[],lbl_8046658C[],lbl_804665A0[],lbl_804665B0[],lbl_804665C4[],lbl_804665D0[],lbl_804665E0[],lbl_804665F4[],lbl_80466604[],lbl_80466618[],lbl_80466624[],lbl_80466634[],lbl_80466640[],lbl_80466650[],lbl_8055D4C4[],lbl_8055D4D0[],lbl_8055D4D8[],lbl_8055D838[],lbl_8055D840[];
struct Unknown80469070{char unknown00[12];const char *unknown0C[64];};
struct Unknown8046917C{char unknown00[16];const char *unknown10[16];};
struct Unknown804691CC{char unknown00[24];const char *unknown18[64];};
Unknown80469070 lbl_80469070={"MemoryData",{lbl_8046657C,lbl_8046658C,lbl_804665A0,lbl_804665B0,lbl_804665C4,lbl_804665D0,lbl_804665E0,lbl_804665F4,lbl_80466604,lbl_80466618,lbl_80466624,lbl_80466634,lbl_80466640,lbl_8055D4D0,lbl_80466650,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_804663C8,lbl_804663D8,lbl_804663E4,lbl_804663F0,lbl_804663FC,lbl_80466408,lbl_80466418,lbl_80466424,lbl_80466434,lbl_80466444,lbl_80466450,lbl_8046645C,lbl_8046646C,lbl_8046647C,lbl_8046648C,lbl_80466498,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8}};
#pragma force_active on
Unknown8046917C lbl_8046917C={"Informational",{lbl_8055D4C4,lbl_8046917C.unknown00,lbl_8055D838,lbl_8055D840,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354}};
Unknown804691CC lbl_804691CC={"kNotificationReserved",{lbl_804662AC,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4}};
#pragma force_active reset
char lbl_804692E4[16]="Double-deletion";
}
inline void unknown800496E8Walk(Unknown800496E8Owner *object,int start,int end,unsigned int *active,Unknown800496E8Record *record,int size){
 int i=0;
 for(;i<size;++i){
  int item=reinterpret_cast<int *>(object->unknown54->unknown10)[i];
  if(item!=-1){
   const Unknown80042DECResult &result=object->slot6C(item,record);
   if(result.unknown00!=kFailure__3Gap && record->unknown04>=start && record->unknown04<=end && record->unknown00!=3 && record->unknown00!=8 && record->unknown00!=2 && record->unknown00!=7) ++*active;
  }
 }
}
extern "C" {
void fn_800496E8(Unknown800496E8Owner *object,int start,int end,unsigned int *records,unsigned int *histogram,unsigned int *active,unsigned int *a,unsigned int *b,unsigned int *difference,unsigned int *maximum,unsigned int *largest,unsigned int *first,int firstTag,int firstIndex,unsigned int *second,int secondTag,int secondIndex){
 int count=0,offset=0;
 Unknown800496E8Record record;
 int size=object->unknown54->unknown08;
 int firstCount=-1,secondCount=-1;
 if(end==-1) end=object->unknown28-1;
 *records=0;
 if(histogram) memset(histogram,0,0x80);
 *active=0;*a=0;*b=0;*difference=0;*maximum=0;*largest=0;*first=0;*second=0;
 for(;count<start;++count) offset=object->slot88(offset);
 do {
  const Unknown80042DECResult &result=object->slot6C(offset,&record);
  if(result.unknown00!=kSuccess__3Gap) break;
  int kind=record.unknown00;
  ++*records;
  if(histogram && kind>=0 && kind<32) ++histogram[kind];
  switch(kind){
   case 1:
    *a+=record.unknown0C;*difference=*a-*b;
    if(*difference>*maximum) *maximum=*difference;
    if(static_cast<unsigned int>(record.unknown0C)>*largest) *largest=record.unknown0C;
    break;
   case 3:
    *b+=record.unknown0C;*difference=*a-*b;
    break;
   case 13:
    if(firstTag==record.unknown14){++firstCount;if(firstCount==firstIndex || firstIndex==-1) *first=*difference;}
    if(secondTag==record.unknown14){++secondCount;if(secondCount==secondIndex || secondIndex==-1) *second=*difference;}
    break;
   case 0:case 2:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 14:case 15:default:break;
  }
  offset=object->slot88(offset);++count;
 }while(count<end && offset!=-1);
 unknown800496E8Walk(object,start,end,active,&record,size);
}
void fn_80049A2C(Unknown800496E8Owner *object,int start,int end,const char *name,unsigned int *a,unsigned int *b,unsigned int *c,unsigned int *d){
 int count=0,offset=0;
 Unknown800496E8Record record;
 if(end==-1) end=object->unknown28-1;
 *a=0;*b=0;*c=0;*d=0;
 for(;count<start;++count) offset=object->slot88(offset);
 do {
  const Unknown80042DECResult &result=object->slot6C(offset,&record);
  if(result.unknown00!=kSuccess__3Gap) break;
  if(record.unknown30 && *record.unknown30 && !strcmp(record.unknown30,name)){
   switch(record.unknown00){case 6:++*a;*c+=record.unknown0C;break;case 8:++*b;*d+=record.unknown0C;break;}
  }
  offset=object->slot88(offset);++count;
 }while(count<end && offset!=-1);
}
int fn_80049BD0(Unknown800496E8Owner *object,unsigned int key){
 int size,index,offset,count;
 index=object->slotC0(key);
 count=0;
 size=object->unknown54->unknown08;
 do {
  offset=reinterpret_cast<int *>(object->unknown54->unknown10)[index];
  if(offset==-1) return -1;
  unsigned int value;
  object->slot74(offset,&value);
  if(value==key) return offset;
  if(++index>=size) index=0;
 }while(++count<size);
 return -1;
}
int fn_80049C98(Unknown800496E8Owner *object,int offset){
 Unknown80042DECStorage *storage=object->unknown50;
 int size=storage->unknown08;
 if(offset>size) return -1;
 const char *p=reinterpret_cast<const char *>(storage->unknown10)+offset;
 if(static_cast<unsigned int>(*p)>=32) return -1;
 int count=p[1];
 if(count>lbl_8055D81C) return -1;
 offset+=count+2;
 return offset>=size ? -1 : offset;
}
int fn_80049D08(Unknown800496E8Owner *object){
 Unknown800496E8Lock lock(object->unknown08);
 int size=object->unknown54->unknown08;
 Unknown800496E8Record record;
 int i;int count=0;
 for(i=0;i<size;++i){
  int offset=reinterpret_cast<int *>(object->unknown54->unknown10)[i];
  if(offset!=-1){
   const Unknown80042DECResult &result=object->slot6C(offset,&record);
   if(result.unknown00!=kFailure__3Gap && record.unknown00!=3 && record.unknown00!=8 && record.unknown00!=2 && record.unknown00!=7) ++count;
  }
 }
 return count;
}
int fn_80049E28(Unknown800496E8Owner *object,int *index){
 Unknown800496E8Lock lock(object->unknown08);
 int size=object->unknown54->unknown08;
 Unknown800496E8Record record;
 while(*index<size){
  int offset=reinterpret_cast<int *>(object->unknown54->unknown10)[*index];
  if(offset!=-1){
   const Unknown80042DECResult &result=object->slot6C(offset,&record);
   if(result.unknown00!=kFailure__3Gap && record.unknown00!=3 && record.unknown00!=8 && record.unknown00!=2 && record.unknown00!=7){++*index;return offset;}
  }
  ++*index;
 }
 return -1;
}
void fn_80049F8C(Unknown800496E8Owner *object,const char *name){
 Unknown800496E8Lock lock(object->unknown08);
 int size=object->unknown54->unknown08;
 Unknown800496E8Record record;
 if(!object->unknown5C->slot64()) return;
 for(int i=0;i<size;++i){
  int offset=reinterpret_cast<int *>(object->unknown54->unknown10)[i];
  if(offset!=-1){
   const Unknown80042DECResult &result=object->slot6C(offset,&record);
   if(result.unknown00!=kFailure__3Gap && record.unknown00!=3 && record.unknown4C){
   char text[0x100];int a,b;
   while(*record.unknown4C){
    object->slotA0(*record.unknown4C,text,0xFF,&a,NULL,0,&b);
    if(!strcmp(text,lbl_8055D848)) break;
    if(strstr(text,name)){record.unknown00=3;record.unknown44=NULL;record.unknown48=0;object->slot68(&record,-1);}
    ++record.unknown4C;
   }
  }
  }
 }
}
unsigned int fn_8004A190(Unknown800496E8Owner *object,unsigned int key){int size=object->unknown54->unknown08;return size ? key%size : 0;}
void fn_8004A1B8(Unknown800496E8Owner *object,unsigned int key,int offset){
 int scaledIndex,size,index,count,limit;
 for(;;){
  count=0;size=unknown800496E8Size(object->unknown54);
  limit=size/2;
  if(!size) return;
  index=object->slotC0(key);
  do {
   scaledIndex=index*4;
   int old=*reinterpret_cast<int *>(reinterpret_cast<char *>(object->unknown54->unknown10)+scaledIndex);
   if(old==-1){unknown800496E8Store(object->unknown54,index,offset);return;}
   unsigned int value;
   object->slot74(old,&value);
   if(value==key){unknown800496E8Store(object->unknown54,index,offset);return;}
   if(++index>=size) index=0;
  }while(++count<limit);
  object->slotC8(size*2);
 }
}
void fn_8004A2F0(Unknown800496E8Owner *object,int size){
 fn_800472FC(object,size);
 if(size>=object->unknown54->unknown08) fn_8004155C(object->unknown54,size,4);
 Unknown80042DECStorage *storage=object->unknown54;
 if(size>=0){if(size<=storage->unknown0C) storage->unknown08=size;else fn_80041660(storage,size,4);}
 int count=object->unknown54->unknown08;
 int *entries=reinterpret_cast<int *>(object->unknown54->unknown10);
 for(int i=0;i<count;++i) entries[i]=lbl_8055D850;
 const char *begin=reinterpret_cast<const char *>(object->unknown50->unknown10);
 const char *end;const char *p=begin;
 end=begin+object->unknown50->unknown08;
 while(p<end){
  char length=p[1];int offset=p-begin;unsigned int value;
  p+=2;
  const Unknown80042DECResult &result=object->slot74(offset,&value);
  if(result.unknown00==kSuccess__3Gap) object->slotC4(value,offset);
  p+=length;
 }
}
}
#pragma pop

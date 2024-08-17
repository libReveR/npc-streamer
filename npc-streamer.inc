#ifndef _NPC_STREAMER_INC
#define _NPC_STREAMER_INC

// NPC Streamer Include
// Yazar: ReveR
// Tarih: 17.08.2024

// NPC'yi oluşturur
native SNPC_Create(const name[], const script[]);

// NPC'nin pozisyonunu ayarlar
native SNPC_SetPos(npcid, Float:x, Float:y, Float:z);

// NPC'nin yönünü ayarlar
native SNPC_SetFacingAngle(npcid, Float:angle);

// NPC'nin akış mesafesini ayarlar
native SNPC_SetStreamDistance(npcid, Float:distance);

// NPC'nin akış mesafesini alır
native Float:SNPC_GetStreamDistance(npcid);

// NPC'yi akışa sokar
native SNPC_StreamIn(npcid);

// NPC'yi akıştan çıkarır
native SNPC_StreamOut(npcid);

// NPC'nin sağlığını ayarlar
native SNPC_SetHealth(npcid, Float:health);

// NPC'nin sağlığını alır
native Float:SNPC_GetHealth(npcid);

// NPC'nin silahını ayarlar
native SNPC_SetWeapon(npcid, weaponid);

// NPC'nin animasyonunu ayarlar
native SNPC_SetAnimation(npcid, const animlib[], const animname[], Float:fDelta, loop, lockx, locky, freeze, time);

// NPC'nin araca binmesini sağlar
native SNPC_PutInVehicle(npcid, vehicleid, seatid);

// NPC'nin araçtan inmesini sağlar
native SNPC_RemoveFromVehicle(npcid);

// NPC'nin dövüş stilini ayarlar
native SNPC_SetFightStyle(npcid, fightstyle);

// NPC'nin saldırı durumunu ayarlar
native SNPC_SetAttack(npcid, targetid);

// NPC'nin saldırı durumunu alır
native SNPC_GetAttack(npcid);

// NPC'nin isim etiketini ayarlar
native SNPC_SetNameTag(npcid, const name[]);

// NPC'nin isim etiketini alır
native SNPC_GetNameTag(npcid, name[], size);

#endif

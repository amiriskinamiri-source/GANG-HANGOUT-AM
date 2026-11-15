# GANG HANGOUT — GTA SA Android AML 2.00 (ARM32)

Paket ini adalah **kerangka proyek/source awal**, bukan plugin siap pasang.
Belum ada AI NPC, pencarian turf, pemilihan animasi, atau penempatan NPC pada kendaraan.
File `.so` yang berisi fitur tersebut belum dibuat dan belum diuji di game.

## Target
- GTA San Andreas Android 2.00
- ABI: `armeabi-v7a` (ARM32)
- Android Mod Loader (AML)
- SDK dasar: AndroidModLoader/aml-psdk

## Rencana fitur
1. Ambient: aktivitas geng di wilayah turf tetap berjalan.
2. Proximity: aktivitas bertambah saat CJ mendekati turf.
3. NPC hanya berkumpul dengan geng yang sama.
4. Pose target: satu kaki disandarkan pada kendaraan.
5. Animasi ngobrol bergantian.
6. Tidak mengubah perilaku CJ.

## Cara build tanpa laptop (memakai GitHub Actions)
1. Buat akun GitHub jika belum punya.
2. Di browser HP, buat repository baru, misalnya `GANG-HANGOUT-AML`.
3. Upload seluruh isi ZIP ini ke repository (jangan upload file ZIP-nya saja).
4. Buka tab **Actions** pada repository. Jika diminta, izinkan Actions.
5. Workflow **Build GANG HANGOUT ARM32** akan berjalan otomatis.
6. Jika build sukses, buka hasil run dan unduh artifact `GANGHANGOUT-ARM32-SCAFFOLD`.

Catatan: artifact dari kerangka ini hanya membuktikan jalur build AML PSDK dan memuat plugin dasar/log. Itu **belum** membuat NPC nongkrong. Jangan pasang sebagai mod fitur final.

## Referensi SDK
AML PSDK menyatakan dukungan GTA SA v2.00 dan memerlukan Android NDK serta C++17:
https://github.com/AndroidModLoader/aml-psdk

## Status
- [x] Struktur proyek awal
- [x] Workflow build ARM32 otomatis
- [ ] Implementasi deteksi turf dan relasi geng
- [ ] Spawn/seleksi NPC dan kendaraan
- [ ] Penempatan pose kaki pada mobil
- [ ] Animasi ngobrol
- [ ] Uji kompatibilitas dan stabilitas di perangkat


void CalculateFuzzy(){

  //=========================
  //  INPUT
  //=========================

  // Instantiating a FuzzyInput object
  FuzzyInput *SUHU = new FuzzyInput(1);
  // Instantiating a FuzzySet object
  FuzzySet *Dingin = new FuzzySet(0, 0, 15, 25);
  // Including the FuzzySet into FuzzyInput
  SUHU->addFuzzySet(Dingin);
  // Instantiating a FuzzySet object
  FuzzySet *Sejuk = new FuzzySet(20, 25, 25, 30);
  // Including the FuzzySet into FuzzyInput
  SUHU->addFuzzySet(Sejuk);
  // Instantiating a FuzzySet object
  FuzzySet *Normal = new FuzzySet(25, 30, 30, 35);
  // Including the FuzzySet into FuzzyInput
  SUHU->addFuzzySet(Normal);
  // Instantiating a FuzzySet object
  FuzzySet *Panas = new FuzzySet(30, 35, 35, 40);
  // Including the FuzzySet into FuzzyInput
  SUHU->addFuzzySet(Panas);
  // Including the FuzzyInput into Fuzzy
  fuzzy->addFuzzyInput(SUHU);

  // Instantiating a FuzzyInput object
  FuzzyInput *KELEMBABAN = new FuzzyInput(2);
  // Instantiating a FuzzySet object
  FuzzySet *Kurang_Lembab = new FuzzySet(0, 0, 0, 40);
  // Including the FuzzySet into FuzzyInput
  KELEMBABAN->addFuzzySet(Kurang_Lembab);
  // Instantiating a FuzzySet object
  FuzzySet *Lembab = new FuzzySet(10, 50, 50, 90);
  // Including the FuzzySet into FuzzyInput
  KELEMBABAN->addFuzzySet(Lembab);
  // Instantiating a FuzzySet object
  FuzzySet *Terlalu_Lembab = new FuzzySet(60, 100, 100, 100);
  // Including the FuzzySet into FuzzyInput
  KELEMBABAN->addFuzzySet(Terlalu_Lembab);
  // Including the FuzzyInput into Fuzzy
  fuzzy->addFuzzyInput(KELEMBABAN);

  // Instantiating a FuzzyInput object
  FuzzyInput *KADAR_CO2 = new FuzzyInput(3);
  // Instantiating a FuzzySet object
  FuzzySet *Rendah = new FuzzySet(0, 0, 1000, 1200);
  // Including the FuzzySet into FuzzyInput
  KADAR_CO2->addFuzzySet(Rendah);
  // Instantiating a FuzzySet object
  FuzzySet *Sedang = new FuzzySet(1000, 1200, 1400, 1600);
  // Including the FuzzySet into FuzzyInput
  KADAR_CO2->addFuzzySet(Sedang);
  // Instantiating a FuzzySet object
  FuzzySet *Tinggi = new FuzzySet(1400, 1600, 2000, 2000);
  // Including the FuzzySet into FuzzyInput
  KADAR_CO2->addFuzzySet(Tinggi);
  // Including the FuzzyInput into Fuzzy
  fuzzy->addFuzzyInput(KADAR_CO2);


  //=========================
  //  OUTPUT
  //=========================

  // Instantiating a FuzzyOutput objects
  FuzzyOutput *VENTILASI = new FuzzyOutput(1);
  // Instantiating a FuzzySet object
  FuzzySet *Terbuka_Kecil = new FuzzySet(0, 0, 30, 45);
  // Including the FuzzySet into FuzzyOutput
  VENTILASI->addFuzzySet(Terbuka_Kecil);
  // Instantiating a FuzzySet object
  FuzzySet *Terbuka_Sedang = new FuzzySet(30, 45, 60, 75);
  // Including the FuzzySet into FuzzyOutput
  VENTILASI->addFuzzySet(Terbuka_Sedang);
  // Instantiating a FuzzySet object
  FuzzySet *Terbuka_Sepenuhnya = new FuzzySet(60, 75, 90, 90);
  // Including the FuzzySet into FuzzyOutput
  VENTILASI->addFuzzySet(Terbuka_Sepenuhnya);
  // Including the FuzzyOutput into Fuzzy
  fuzzy->addFuzzyOutput(VENTILASI);

  // Instantiating a FuzzyOutput objects
  FuzzyOutput *KIPAS_BUANG = new FuzzyOutput(2);
  // Instantiating a FuzzySet object
  FuzzySet *Lambat_Buang = new FuzzySet(0, 1600, 1600, 3200);
  // Including the FuzzySet into FuzzyOutput
  KIPAS_BUANG->addFuzzySet(Lambat_Buang);
  // Instantiating a FuzzySet object
  FuzzySet *Sedang_Buang = new FuzzySet(1600, 3200, 3200, 4800);
  // Including the FuzzySet into FuzzyOutput
  KIPAS_BUANG->addFuzzySet(Sedang_Buang);
  // Instantiating a FuzzySet object
  FuzzySet *Kencang_Buang = new FuzzySet(3200, 4800, 4800, 4800);
  // Including the FuzzySet into FuzzyOutput
  KIPAS_BUANG->addFuzzySet(Kencang_Buang);
  // Including the FuzzyOutput into Fuzzy
  fuzzy->addFuzzyOutput(KIPAS_BUANG);

  // Instantiating a FuzzyOutput objects
  FuzzyOutput *KIPAS_MASUK = new FuzzyOutput(3);
  // Instantiating a FuzzySet object
  FuzzySet *Lambat_Masuk = new FuzzySet(0, 1600, 1600, 3200);
  // Including the FuzzySet into FuzzyOutput
  KIPAS_MASUK->addFuzzySet(Lambat_Masuk);
  // Instantiating a FuzzySet object
  FuzzySet *Sedang_Masuk = new FuzzySet(1600, 3200, 3200, 4800);
  // Including the FuzzySet into FuzzyOutput
  KIPAS_MASUK->addFuzzySet(Sedang_Masuk);
  // Instantiating a FuzzySet object
  FuzzySet *Kencang_Masuk = new FuzzySet(3200, 4800, 4800, 4800);
  // Including the FuzzySet into FuzzyOutput
  KIPAS_MASUK->addFuzzySet(Kencang_Masuk);
  // Including the FuzzyOutput into Fuzzy
  fuzzy->addFuzzyOutput(KIPAS_MASUK);


  //=========================
  //  RULE
  //=========================

  // ====================
  // Rule 1
  // ====================
  FuzzyRuleAntecedent *if_SuhuNormal_KelembabanLembab = new FuzzyRuleAntecedent();
  if_SuhuNormal_KelembabanLembab->joinWithAND(Normal, Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah = new FuzzyRuleAntecedent();
  KadarCO2Rendah->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuNormal_and_KelembabanLembab_and_KadarCO2Rendah = new FuzzyRuleAntecedent();
  if_SuhuNormal_and_KelembabanLembab_and_KadarCO2Rendah->joinWithAND(if_SuhuNormal_KelembabanLembab, KadarCO2Rendah);

  FuzzyRuleConsequent *then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat = new FuzzyRuleConsequent();
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat->addOutput(Terbuka_Kecil);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat->addOutput(Lambat_Buang);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat->addOutput(Lambat_Masuk);

  FuzzyRule *fuzzyRule1 = new FuzzyRule(1, if_SuhuNormal_and_KelembabanLembab_and_KadarCO2Rendah, then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat);
  fuzzy->addFuzzyRule(fuzzyRule1);

  // ====================
  // Rule 2
  // ====================
  FuzzyRuleAntecedent *if_SuhuDingin_KelembabanKurangLembab = new FuzzyRuleAntecedent();
  if_SuhuDingin_KelembabanKurangLembab->joinWithAND(Dingin, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Tinggi = new FuzzyRuleAntecedent();
  KadarCO2Tinggi->joinSingle(Tinggi);
  FuzzyRuleAntecedent *if_SuhuDingin_and_KelembabanKurangLembab_and_KadarCO2Tinggi = new FuzzyRuleAntecedent();
  if_SuhuDingin_and_KelembabanKurangLembab_and_KadarCO2Tinggi->joinWithAND(if_SuhuDingin_KelembabanKurangLembab, KadarCO2Tinggi);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukLambat = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukLambat->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukLambat->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukLambat->addOutput(Lambat_Masuk);

  FuzzyRule *fuzzyRule2 = new FuzzyRule(2, if_SuhuDingin_and_KelembabanKurangLembab_and_KadarCO2Tinggi, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukLambat);
  fuzzy->addFuzzyRule(fuzzyRule2);

  // ====================
  // Rule 3
  // ====================
  FuzzyRuleAntecedent *if_SuhuPanas_KelembabanKurangLembab = new FuzzyRuleAntecedent();
  if_SuhuPanas_KelembabanKurangLembab->joinWithAND(Panas, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah_R3 = new FuzzyRuleAntecedent();
  KadarCO2Rendah_R3->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuPanas_and_KelembabanKurangLembab_and_KadarCO2Rendah_R3 = new FuzzyRuleAntecedent();
  if_SuhuPanas_and_KelembabanKurangLembab_and_KadarCO2Rendah_R3->joinWithAND(if_SuhuPanas_KelembabanKurangLembab, KadarCO2Rendah_R3);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangLambat_KipasMasukKencang = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangLambat_KipasMasukKencang->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangLambat_KipasMasukKencang->addOutput(Lambat_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangLambat_KipasMasukKencang->addOutput(Kencang_Masuk);

  FuzzyRule *fuzzyRule3 = new FuzzyRule(3, if_SuhuPanas_and_KelembabanKurangLembab_and_KadarCO2Rendah_R3, then_VentilasiTerbukaSepenuhnya_KipasBuangLambat_KipasMasukKencang);
  fuzzy->addFuzzyRule(fuzzyRule3);

  // ====================
  // Rule 4
  // ====================
  FuzzyRuleAntecedent *if_SuhuDingin_KelembabanKurangLembab_R4 = new FuzzyRuleAntecedent();
  if_SuhuDingin_KelembabanKurangLembab_R4->joinWithAND(Dingin, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah_R4 = new FuzzyRuleAntecedent();
  KadarCO2Rendah_R4->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuDingin_and_KelembabanKurangLembab_and_KadarCO2Rendah_R4 = new FuzzyRuleAntecedent();
  if_SuhuDingin_and_KelembabanKurangLembab_and_KadarCO2Rendah_R4->joinWithAND(if_SuhuDingin_KelembabanKurangLembab_R4, KadarCO2Rendah_R4);

  FuzzyRuleConsequent *then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R4 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R4->addOutput(Terbuka_Kecil);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R4->addOutput(Lambat_Buang);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R4->addOutput(Lambat_Masuk);

  FuzzyRule *fuzzyRule4 = new FuzzyRule(4, if_SuhuDingin_and_KelembabanKurangLembab_and_KadarCO2Rendah_R4, then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R4);
  fuzzy->addFuzzyRule(fuzzyRule4);

  // ====================
  // Rule 5
  // ====================
  FuzzyRuleAntecedent *if_SuhuDingin_KelembabanKurangLembab_R5 = new FuzzyRuleAntecedent();
  if_SuhuDingin_KelembabanKurangLembab_R5->joinWithAND(Dingin, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Sedang_R5 = new FuzzyRuleAntecedent();
  KadarCO2Sedang_R5->joinSingle(Sedang);
  FuzzyRuleAntecedent *if_SuhuDingin_and_KelembabanKurangLembab_and_KadarCO2Sedang_R5 = new FuzzyRuleAntecedent();
  if_SuhuDingin_and_KelembabanKurangLembab_and_KadarCO2Sedang_R5->joinWithAND(if_SuhuDingin_KelembabanKurangLembab_R5, KadarCO2Sedang_R5);

  FuzzyRuleConsequent *then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R5 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R5->addOutput(Terbuka_Sedang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R5->addOutput(Sedang_Buang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R5->addOutput(Sedang_Masuk);

  FuzzyRule *fuzzyRule5 = new FuzzyRule(5, if_SuhuDingin_and_KelembabanKurangLembab_and_KadarCO2Sedang_R5, then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R5);
  fuzzy->addFuzzyRule(fuzzyRule5);

  // ====================
  // Rule 6
  // ====================
  FuzzyRuleAntecedent *if_SuhuDingin_KelembabanKurangLembab_R6 = new FuzzyRuleAntecedent();
  if_SuhuDingin_KelembabanKurangLembab_R6->joinWithAND(Dingin, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Tinggi_R6 = new FuzzyRuleAntecedent();
  KadarCO2Tinggi_R6->joinSingle(Tinggi);
  FuzzyRuleAntecedent *if_SuhuDingin_and_KelembabanKurangLembab_and_KadarCO2Tinggi_R6 = new FuzzyRuleAntecedent();
  if_SuhuDingin_and_KelembabanKurangLembab_and_KadarCO2Tinggi_R6->joinWithAND(if_SuhuDingin_KelembabanKurangLembab_R6, KadarCO2Tinggi_R6);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R6 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R6->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R6->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R6->addOutput(Kencang_Masuk);

  FuzzyRule *fuzzyRule6 = new FuzzyRule(6, if_SuhuDingin_and_KelembabanKurangLembab_and_KadarCO2Tinggi_R6, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R6);
  fuzzy->addFuzzyRule(fuzzyRule6);

  // ====================
  // Rule 7
  // ====================
  FuzzyRuleAntecedent *if_SuhuDingin_KelembabanLembab_R7 = new FuzzyRuleAntecedent();
  if_SuhuDingin_KelembabanLembab_R7->joinWithAND(Dingin, Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah_R7 = new FuzzyRuleAntecedent();
  KadarCO2Rendah_R7->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuDingin_and_KelembabanLembab_and_KadarCO2Rendah_R7 = new FuzzyRuleAntecedent();
  if_SuhuDingin_and_KelembabanLembab_and_KadarCO2Rendah_R7->joinWithAND(if_SuhuDingin_KelembabanLembab_R7, KadarCO2Rendah_R7);

  FuzzyRuleConsequent *then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R7 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R7->addOutput(Terbuka_Kecil);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R7->addOutput(Lambat_Buang);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R7->addOutput(Lambat_Masuk);

  FuzzyRule *fuzzyRule7 = new FuzzyRule(7, if_SuhuDingin_and_KelembabanLembab_and_KadarCO2Rendah_R7, then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R7);
  fuzzy->addFuzzyRule(fuzzyRule7);
  
  // ====================
  // Rule 8
  // ====================
  FuzzyRuleAntecedent *if_SuhuDingin_KelembabanLembab_R8 = new FuzzyRuleAntecedent();
  if_SuhuDingin_KelembabanLembab_R8->joinWithAND(Dingin, Lembab);
  FuzzyRuleAntecedent *KadarCO2Sedang_R8 = new FuzzyRuleAntecedent();
  KadarCO2Sedang_R8->joinSingle(Sedang);
  FuzzyRuleAntecedent *if_SuhuDingin_and_KelembabanLembab_and_KadarCO2Sedang_R8 = new FuzzyRuleAntecedent();
  if_SuhuDingin_and_KelembabanLembab_and_KadarCO2Sedang_R8->joinWithAND(if_SuhuDingin_KelembabanLembab_R8, KadarCO2Sedang_R8);

  FuzzyRuleConsequent *then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R8 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R8->addOutput(Terbuka_Sedang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R8->addOutput(Sedang_Buang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R8->addOutput(Sedang_Masuk);

  FuzzyRule *fuzzyRule8 = new FuzzyRule(8, if_SuhuDingin_and_KelembabanLembab_and_KadarCO2Sedang_R8, then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R8);
  fuzzy->addFuzzyRule(fuzzyRule8);
  
  // ====================
  // Rule 9
  // ====================
  FuzzyRuleAntecedent *if_SuhuDingin_KelembabanLembab_R9 = new FuzzyRuleAntecedent();
  if_SuhuDingin_KelembabanLembab_R9->joinWithAND(Dingin, Lembab);
  FuzzyRuleAntecedent *KadarCO2Tinggi_R9 = new FuzzyRuleAntecedent();
  KadarCO2Tinggi_R9->joinSingle(Tinggi);
  FuzzyRuleAntecedent *if_SuhuDingin_and_KelembabanLembab_and_KadarCO2Tinggi_R9 = new FuzzyRuleAntecedent();
  if_SuhuDingin_and_KelembabanLembab_and_KadarCO2Tinggi_R9->joinWithAND(if_SuhuDingin_KelembabanLembab_R9, KadarCO2Tinggi_R9);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R9 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R9->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R9->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R9->addOutput(Kencang_Masuk);

  FuzzyRule *fuzzyRule9 = new FuzzyRule(9, if_SuhuDingin_and_KelembabanLembab_and_KadarCO2Tinggi_R9, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R9);
  fuzzy->addFuzzyRule(fuzzyRule9);

  
  // ====================
  // Rule 10
  // ====================
  FuzzyRuleAntecedent *if_SuhuDingin_KelembabanTerlaluLembab_R10 = new FuzzyRuleAntecedent();
  if_SuhuDingin_KelembabanTerlaluLembab_R10->joinWithAND(Dingin, Terlalu_Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah_R10 = new FuzzyRuleAntecedent();
  KadarCO2Rendah_R10->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuDingin_and_KelembabanTerlaluLembab_and_KadarCO2Rendah_R10 = new FuzzyRuleAntecedent();
  if_SuhuDingin_and_KelembabanTerlaluLembab_and_KadarCO2Rendah_R10->joinWithAND(if_SuhuDingin_KelembabanTerlaluLembab_R10, KadarCO2Rendah_R10);

  FuzzyRuleConsequent *then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R10 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R10->addOutput(Terbuka_Sedang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R10->addOutput(Sedang_Buang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R10->addOutput(Lambat_Masuk);

  FuzzyRule *fuzzyRule10 = new FuzzyRule(10, if_SuhuDingin_and_KelembabanTerlaluLembab_and_KadarCO2Rendah_R10, then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R10);
  fuzzy->addFuzzyRule(fuzzyRule10);
  
  // ====================
  // Rule 11
  // ====================
  FuzzyRuleAntecedent *if_SuhuDingin_KelembabanTerlaluLembab_R11 = new FuzzyRuleAntecedent();
  if_SuhuDingin_KelembabanTerlaluLembab_R11->joinWithAND(Dingin, Terlalu_Lembab);
  FuzzyRuleAntecedent *KadarCO2Sedang_R11 = new FuzzyRuleAntecedent();
  KadarCO2Sedang_R11->joinSingle(Sedang);
  FuzzyRuleAntecedent *if_SuhuDingin_and_KelembabanTerlaluLembab_and_KadarCO2Sedang_R11 = new FuzzyRuleAntecedent();
  if_SuhuDingin_and_KelembabanTerlaluLembab_and_KadarCO2Sedang_R11->joinWithAND(if_SuhuDingin_KelembabanTerlaluLembab_R11, KadarCO2Sedang_R11);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R11 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R11->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R11->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R11->addOutput(Sedang_Masuk);

  FuzzyRule *fuzzyRule11 = new FuzzyRule(11, if_SuhuDingin_and_KelembabanTerlaluLembab_and_KadarCO2Sedang_R11, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R11);
  fuzzy->addFuzzyRule(fuzzyRule11);
  
  // ====================
  // Rule 12
  // ====================
  FuzzyRuleAntecedent *if_SuhuDingin_KelembabanTerlaluLembab_R12 = new FuzzyRuleAntecedent();
  if_SuhuDingin_KelembabanTerlaluLembab_R12->joinWithAND(Dingin, Terlalu_Lembab);
  FuzzyRuleAntecedent *KadarCO2Tinggi_R12 = new FuzzyRuleAntecedent();
  KadarCO2Tinggi_R12->joinSingle(Tinggi);
  FuzzyRuleAntecedent *if_SuhuDingin_and_KelembabanTerlaluLembab_and_KadarCO2Tinggi_R12 = new FuzzyRuleAntecedent();
  if_SuhuDingin_and_KelembabanTerlaluLembab_and_KadarCO2Tinggi_R12->joinWithAND(if_SuhuDingin_KelembabanTerlaluLembab_R12, KadarCO2Tinggi_R12);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R12 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R12->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R12->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R12->addOutput(Sedang_Masuk);

  FuzzyRule *fuzzyRule12 = new FuzzyRule(12, if_SuhuDingin_and_KelembabanTerlaluLembab_and_KadarCO2Tinggi_R12, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R12);
  fuzzy->addFuzzyRule(fuzzyRule12);
  
  // ====================
  // Rule 13
  // ====================
  FuzzyRuleAntecedent *if_SuhuSejuk_KelembabanKurangLembab_R13 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_KelembabanKurangLembab_R13->joinWithAND(Sejuk, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah_R13 = new FuzzyRuleAntecedent();
  KadarCO2Rendah_R13->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuSejuk_and_KelembabanKurangLembab_and_KadarCO2Rendah_R13 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_and_KelembabanKurangLembab_and_KadarCO2Rendah_R13->joinWithAND(if_SuhuSejuk_KelembabanKurangLembab_R13, KadarCO2Rendah_R13);

  FuzzyRuleConsequent *then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukSedang_R13 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukSedang_R13->addOutput(Terbuka_Kecil);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukSedang_R13->addOutput(Lambat_Buang);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukSedang_R13->addOutput(Sedang_Masuk);

  FuzzyRule *fuzzyRule13 = new FuzzyRule(13, if_SuhuSejuk_and_KelembabanKurangLembab_and_KadarCO2Rendah_R13, then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukSedang_R13);
  fuzzy->addFuzzyRule(fuzzyRule13);

  
  // ====================
  // Rule 14
  // ====================
  FuzzyRuleAntecedent *if_SuhuSejuk_KelembabanKurangLembab_R14 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_KelembabanKurangLembab_R14->joinWithAND(Sejuk, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Sedang_R14 = new FuzzyRuleAntecedent();
  KadarCO2Sedang_R14->joinSingle(Sedang);
  FuzzyRuleAntecedent *if_SuhuSejuk_and_KelembabanKurangLembab_and_KadarCO2Sedang_R14 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_and_KelembabanKurangLembab_and_KadarCO2Sedang_R14->joinWithAND(if_SuhuSejuk_KelembabanKurangLembab_R14, KadarCO2Sedang_R14);

  FuzzyRuleConsequent *then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R14 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R14->addOutput(Terbuka_Sedang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R14->addOutput(Sedang_Buang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R14->addOutput(Sedang_Masuk);

  FuzzyRule *fuzzyRule14 = new FuzzyRule(14, if_SuhuSejuk_and_KelembabanKurangLembab_and_KadarCO2Sedang_R14, then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R14);
  fuzzy->addFuzzyRule(fuzzyRule14);
  
  // ====================
  // Rule 15
  // ====================
  FuzzyRuleAntecedent *if_SuhuSejuk_KelembabanKurangLembab_R15 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_KelembabanKurangLembab_R15->joinWithAND(Sejuk, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Tinggi_R15 = new FuzzyRuleAntecedent();
  KadarCO2Tinggi_R15->joinSingle(Tinggi);
  FuzzyRuleAntecedent *if_SuhuSejuk_and_KelembabanKurangLembab_and_KadarCO2Tinggi_R15 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_and_KelembabanKurangLembab_and_KadarCO2Tinggi_R15->joinWithAND(if_SuhuSejuk_KelembabanKurangLembab_R15, KadarCO2Tinggi_R15);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R15 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R15->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R15->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R15->addOutput(Sedang_Masuk);

  FuzzyRule *fuzzyRule15 = new FuzzyRule(15, if_SuhuSejuk_and_KelembabanKurangLembab_and_KadarCO2Tinggi_R15, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R15);
  fuzzy->addFuzzyRule(fuzzyRule15);
  
  // ====================
  // Rule 16
  // ====================
  FuzzyRuleAntecedent *if_SuhuSejuk_KelembabanLembab_R16 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_KelembabanLembab_R16->joinWithAND(Sejuk, Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah_R16 = new FuzzyRuleAntecedent();
  KadarCO2Rendah_R16->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuSejuk_and_KelembabanLembab_and_KadarCO2Rendah_R16 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_and_KelembabanLembab_and_KadarCO2Rendah_R16->joinWithAND(if_SuhuSejuk_KelembabanLembab_R16, KadarCO2Rendah_R16);

  FuzzyRuleConsequent *then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R16 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R16->addOutput(Terbuka_Kecil);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R16->addOutput(Lambat_Buang);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R16->addOutput(Lambat_Masuk);

  FuzzyRule *fuzzyRule16 = new FuzzyRule(16, if_SuhuSejuk_and_KelembabanLembab_and_KadarCO2Rendah_R16, then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R16);
  fuzzy->addFuzzyRule(fuzzyRule16);
  
  // ====================
  // Rule 17
  // ====================
  FuzzyRuleAntecedent *if_SuhuSejuk_KelembabanLembab_R17 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_KelembabanLembab_R17->joinWithAND(Sejuk, Lembab);
  FuzzyRuleAntecedent *KadarCO2Sedang_R17 = new FuzzyRuleAntecedent();
  KadarCO2Sedang_R17->joinSingle(Sedang);
  FuzzyRuleAntecedent *if_SuhuSejuk_and_KelembabanLembab_and_KadarCO2Sedang_R17 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_and_KelembabanLembab_and_KadarCO2Sedang_R17->joinWithAND(if_SuhuSejuk_KelembabanLembab_R17, KadarCO2Sedang_R17);

  FuzzyRuleConsequent *then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R17 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R17->addOutput(Terbuka_Sedang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R17->addOutput(Sedang_Buang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R17->addOutput(Lambat_Masuk);

  FuzzyRule *fuzzyRule17 = new FuzzyRule(17, if_SuhuSejuk_and_KelembabanLembab_and_KadarCO2Sedang_R17, then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R17);
  fuzzy->addFuzzyRule(fuzzyRule17);
  
  // ====================
  // Rule 18
  // ====================
  FuzzyRuleAntecedent *if_SuhuSejuk_KelembabanLembab_R18 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_KelembabanLembab_R18->joinWithAND(Sejuk, Lembab);
  FuzzyRuleAntecedent *KadarCO2Tinggi_R18 = new FuzzyRuleAntecedent();
  KadarCO2Tinggi_R18->joinSingle(Tinggi);
  FuzzyRuleAntecedent *if_SuhuSejuk_and_KelembabanLembab_and_KadarCO2Tinggi_R18 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_and_KelembabanLembab_and_KadarCO2Tinggi_R18->joinWithAND(if_SuhuSejuk_KelembabanLembab_R18, KadarCO2Tinggi_R18);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R18 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R18->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R18->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R18->addOutput(Sedang_Masuk);

  FuzzyRule *fuzzyRule18 = new FuzzyRule(18, if_SuhuSejuk_and_KelembabanLembab_and_KadarCO2Tinggi_R18, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R18);
  fuzzy->addFuzzyRule(fuzzyRule18);
  
  // ====================
  // Rule 19
  // ====================
  FuzzyRuleAntecedent *if_SuhuSejuk_KelembabanTerlaluLembab_R19 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_KelembabanTerlaluLembab_R19->joinWithAND(Sejuk, Terlalu_Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah_R19 = new FuzzyRuleAntecedent();
  KadarCO2Rendah_R19->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuSejuk_and_KelembabanTerlaluLembab_and_KadarCO2Rendah_R19 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_and_KelembabanTerlaluLembab_and_KadarCO2Rendah_R19->joinWithAND(if_SuhuSejuk_KelembabanTerlaluLembab_R19, KadarCO2Rendah_R19);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukLambat_R19 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukLambat_R19->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukLambat_R19->addOutput(Sedang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukLambat_R19->addOutput(Lambat_Masuk);

  FuzzyRule *fuzzyRule19 = new FuzzyRule(19, if_SuhuSejuk_and_KelembabanTerlaluLembab_and_KadarCO2Rendah_R19, then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukLambat_R19);
  fuzzy->addFuzzyRule(fuzzyRule19);
  
  // ====================
  // Rule 20
  // ====================
  FuzzyRuleAntecedent *if_SuhuSejuk_KelembabanTerlaluLembab_R20 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_KelembabanTerlaluLembab_R20->joinWithAND(Sejuk, Terlalu_Lembab);
  FuzzyRuleAntecedent *KadarCO2Sedang_R20 = new FuzzyRuleAntecedent();
  KadarCO2Sedang_R20->joinSingle(Sedang);
  FuzzyRuleAntecedent *if_SuhuSejuk_and_KelembabanTerlaluLembab_and_KadarCO2Sedang_R20 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_and_KelembabanTerlaluLembab_and_KadarCO2Sedang_R20->joinWithAND(if_SuhuSejuk_KelembabanTerlaluLembab_R20, KadarCO2Sedang_R20);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukSedang_R20 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukSedang_R20->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukSedang_R20->addOutput(Sedang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukSedang_R20->addOutput(Sedang_Masuk);

  FuzzyRule *fuzzyRule20 = new FuzzyRule(20, if_SuhuSejuk_and_KelembabanTerlaluLembab_and_KadarCO2Sedang_R20, then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukSedang_R20);
  fuzzy->addFuzzyRule(fuzzyRule20);
  
  // ====================
  // Rule 21
  // ====================
  FuzzyRuleAntecedent *if_SuhuSejuk_KelembabanTerlaluLembab_R21 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_KelembabanTerlaluLembab_R21->joinWithAND(Sejuk, Terlalu_Lembab);
  FuzzyRuleAntecedent *KadarCO2Tinggi_R21 = new FuzzyRuleAntecedent();
  KadarCO2Tinggi_R21->joinSingle(Tinggi);
  FuzzyRuleAntecedent *if_SuhuSejuk_and_KelembabanTerlaluLembab_and_KadarCO2Tinggi_R21 = new FuzzyRuleAntecedent();
  if_SuhuSejuk_and_KelembabanTerlaluLembab_and_KadarCO2Tinggi_R21->joinWithAND(if_SuhuSejuk_KelembabanTerlaluLembab_R21, KadarCO2Tinggi_R21);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R21 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R21->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R21->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R21->addOutput(Kencang_Masuk);

  FuzzyRule *fuzzyRule21 = new FuzzyRule(21, if_SuhuSejuk_and_KelembabanTerlaluLembab_and_KadarCO2Tinggi_R21, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R21);
  fuzzy->addFuzzyRule(fuzzyRule21);
  
  // ====================
  // Rule 22
  // ====================
  FuzzyRuleAntecedent *if_SuhuNormal_KelembabanKurangLembab_R22 = new FuzzyRuleAntecedent();
  if_SuhuNormal_KelembabanKurangLembab_R22->joinWithAND(Normal, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah_R22 = new FuzzyRuleAntecedent();
  KadarCO2Rendah_R22->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuNormal_and_KelembabanKurangLembab_and_KadarCO2Rendah_R22 = new FuzzyRuleAntecedent();
  if_SuhuNormal_and_KelembabanKurangLembab_and_KadarCO2Rendah_R22->joinWithAND(if_SuhuNormal_KelembabanKurangLembab_R22, KadarCO2Rendah_R22);

  FuzzyRuleConsequent *then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R22 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R22->addOutput(Terbuka_Kecil);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R22->addOutput(Lambat_Buang);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R22->addOutput(Lambat_Masuk);

  FuzzyRule *fuzzyRule22 = new FuzzyRule(22, if_SuhuNormal_and_KelembabanKurangLembab_and_KadarCO2Rendah_R22, then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R22);
  fuzzy->addFuzzyRule(fuzzyRule22);
  
  // ====================
  // Rule 23
  // ====================
  FuzzyRuleAntecedent *if_SuhuNormal_KelembabanKurangLembab_R23 = new FuzzyRuleAntecedent();
  if_SuhuNormal_KelembabanKurangLembab_R23->joinWithAND(Normal, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Sedang_R23 = new FuzzyRuleAntecedent();
  KadarCO2Sedang_R23->joinSingle(Sedang);
  FuzzyRuleAntecedent *if_SuhuNormal_and_KelembabanKurangLembab_and_KadarCO2Sedang_R23 = new FuzzyRuleAntecedent();
  if_SuhuNormal_and_KelembabanKurangLembab_and_KadarCO2Sedang_R23->joinWithAND(if_SuhuNormal_KelembabanKurangLembab_R23, KadarCO2Sedang_R23);

  FuzzyRuleConsequent *then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R23 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R23->addOutput(Terbuka_Sedang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R23->addOutput(Sedang_Buang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R23->addOutput(Lambat_Masuk);

  FuzzyRule *fuzzyRule23 = new FuzzyRule(23, if_SuhuNormal_and_KelembabanKurangLembab_and_KadarCO2Sedang_R23, then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R23);
  fuzzy->addFuzzyRule(fuzzyRule23);
  
  // ====================
  // Rule 24
  // ====================
  FuzzyRuleAntecedent *if_SuhuNormal_KelembabanKurangLembab_R24 = new FuzzyRuleAntecedent();
  if_SuhuNormal_KelembabanKurangLembab_R24->joinWithAND(Normal, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Tinggi_R24 = new FuzzyRuleAntecedent();
  KadarCO2Tinggi_R24->joinSingle(Tinggi);
  FuzzyRuleAntecedent *if_SuhuNormal_and_KelembabanKurangLembab_and_KadarCO2Tinggi_R24 = new FuzzyRuleAntecedent();
  if_SuhuNormal_and_KelembabanKurangLembab_and_KadarCO2Tinggi_R24->joinWithAND(if_SuhuNormal_KelembabanKurangLembab_R24, KadarCO2Tinggi_R24);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R24 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R24->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R24->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R24->addOutput(Sedang_Masuk);

  FuzzyRule *fuzzyRule24 = new FuzzyRule(24, if_SuhuNormal_and_KelembabanKurangLembab_and_KadarCO2Tinggi_R24, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R24);
  fuzzy->addFuzzyRule(fuzzyRule24);

  // ====================
  // Rule 25
  // ====================
  FuzzyRuleAntecedent *if_SuhuNormal_KelembabanLembab_R25 = new FuzzyRuleAntecedent();
  if_SuhuNormal_KelembabanLembab_R25->joinWithAND(Normal, Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah_R25 = new FuzzyRuleAntecedent();
  KadarCO2Rendah_R25->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuNormal_and_KelembabanLembab_and_KadarCO2Rendah_R25 = new FuzzyRuleAntecedent();
  if_SuhuNormal_and_KelembabanLembab_and_KadarCO2Rendah_R25->joinWithAND(if_SuhuNormal_KelembabanLembab_R25, KadarCO2Rendah_R25);

  FuzzyRuleConsequent *then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R25 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R25->addOutput(Terbuka_Kecil);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R25->addOutput(Lambat_Buang);
  then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R25->addOutput(Lambat_Masuk);

  FuzzyRule *fuzzyRule25 = new FuzzyRule(25, if_SuhuNormal_and_KelembabanLembab_and_KadarCO2Rendah_R25, then_VentilasiTerbukaKecil_KipasBuangLambat_KipasMasukLambat_R25);
  fuzzy->addFuzzyRule(fuzzyRule25);

  // ====================
  // Rule 26
  // ====================
  FuzzyRuleAntecedent *if_SuhuNormal_KelembabanLembab_R26 = new FuzzyRuleAntecedent();
  if_SuhuNormal_KelembabanLembab_R26->joinWithAND(Normal, Lembab);
  FuzzyRuleAntecedent *KadarCO2Sedang_R26 = new FuzzyRuleAntecedent();
  KadarCO2Sedang_R26->joinSingle(Sedang);
  FuzzyRuleAntecedent *if_SuhuNormal_and_KelembabanLembab_and_KadarCO2Sedang_R26 = new FuzzyRuleAntecedent();
  if_SuhuNormal_and_KelembabanLembab_and_KadarCO2Sedang_R26->joinWithAND(if_SuhuNormal_KelembabanLembab_R26, KadarCO2Sedang_R26);

  FuzzyRuleConsequent *then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R26 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R26->addOutput(Terbuka_Sedang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R26->addOutput(Sedang_Buang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R26->addOutput(Lambat_Masuk);

  FuzzyRule *fuzzyRule26 = new FuzzyRule(26, if_SuhuNormal_and_KelembabanLembab_and_KadarCO2Sedang_R26, then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukLambat_R26);
  fuzzy->addFuzzyRule(fuzzyRule26);

  // ====================
  // Rule 27
  // ====================
  FuzzyRuleAntecedent *if_SuhuNormal_KelembabanLembab_R27 = new FuzzyRuleAntecedent();
  if_SuhuNormal_KelembabanLembab_R27->joinWithAND(Normal, Lembab);
  FuzzyRuleAntecedent *KadarCO2Tinggi_R27 = new FuzzyRuleAntecedent();
  KadarCO2Tinggi_R27->joinSingle(Tinggi);
  FuzzyRuleAntecedent *if_SuhuNormal_and_KelembabanLembab_and_KadarCO2Tinggi_R27 = new FuzzyRuleAntecedent();
  if_SuhuNormal_and_KelembabanLembab_and_KadarCO2Tinggi_R27->joinWithAND(if_SuhuNormal_KelembabanLembab_R27, KadarCO2Tinggi_R27);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R27 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R27->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R27->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R27->addOutput(Sedang_Masuk);

  FuzzyRule *fuzzyRule27 = new FuzzyRule(27, if_SuhuNormal_and_KelembabanLembab_and_KadarCO2Tinggi_R27, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R27);
  fuzzy->addFuzzyRule(fuzzyRule27);
  
  // ====================
  // Rule 28
  // ====================
  FuzzyRuleAntecedent *if_SuhuNormal_KelembabanTerlaluLembab_R28 = new FuzzyRuleAntecedent();
  if_SuhuNormal_KelembabanTerlaluLembab_R28->joinWithAND(Normal, Terlalu_Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah_R28 = new FuzzyRuleAntecedent();
  KadarCO2Rendah_R28->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuNormal_and_KelembabanTerlaluLembab_and_KadarCO2Rendah_R28 = new FuzzyRuleAntecedent();
  if_SuhuNormal_and_KelembabanTerlaluLembab_and_KadarCO2Rendah_R28->joinWithAND(if_SuhuNormal_KelembabanTerlaluLembab_R28, KadarCO2Rendah_R28);

  FuzzyRuleConsequent *then_VentilasiTerbukaKecil_KipasBuangSedang_KipasMasukLambat_R28 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaKecil_KipasBuangSedang_KipasMasukLambat_R28->addOutput(Terbuka_Kecil);
  then_VentilasiTerbukaKecil_KipasBuangSedang_KipasMasukLambat_R28->addOutput(Sedang_Buang);
  then_VentilasiTerbukaKecil_KipasBuangSedang_KipasMasukLambat_R28->addOutput(Lambat_Masuk);

  FuzzyRule *fuzzyRule28 = new FuzzyRule(28, if_SuhuNormal_and_KelembabanTerlaluLembab_and_KadarCO2Rendah_R28, then_VentilasiTerbukaKecil_KipasBuangSedang_KipasMasukLambat_R28);
  fuzzy->addFuzzyRule(fuzzyRule28);

  // ====================
  // Rule 29
  // ====================
  FuzzyRuleAntecedent *if_SuhuNormal_KelembabanTerlaluLembab_R29 = new FuzzyRuleAntecedent();
  if_SuhuNormal_KelembabanTerlaluLembab_R29->joinWithAND(Normal, Terlalu_Lembab);
  FuzzyRuleAntecedent *KadarCO2Sedang_R29 = new FuzzyRuleAntecedent();
  KadarCO2Sedang_R29->joinSingle(Sedang);
  FuzzyRuleAntecedent *if_SuhuNormal_and_KelembabanTerlaluLembab_and_KadarCO2Sedang_R29 = new FuzzyRuleAntecedent();
  if_SuhuNormal_and_KelembabanTerlaluLembab_and_KadarCO2Sedang_R29->joinWithAND(if_SuhuNormal_KelembabanTerlaluLembab_R29, KadarCO2Sedang_R29);

  FuzzyRuleConsequent *then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R29 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R29->addOutput(Terbuka_Sedang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R29->addOutput(Sedang_Buang);
  then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R29->addOutput(Sedang_Masuk);

  FuzzyRule *fuzzyRule29 = new FuzzyRule(29, if_SuhuNormal_and_KelembabanTerlaluLembab_and_KadarCO2Sedang_R29, then_VentilasiTerbukaSedang_KipasBuangSedang_KipasMasukSedang_R29);
  fuzzy->addFuzzyRule(fuzzyRule29);

  // ====================
  // Rule 30
  // ====================
  FuzzyRuleAntecedent *if_SuhuNormal_KelembabanTerlaluLembab_R30 = new FuzzyRuleAntecedent();
  if_SuhuNormal_KelembabanTerlaluLembab_R30->joinWithAND(Normal, Terlalu_Lembab);
  FuzzyRuleAntecedent *KadarCO2Tinggi_R30 = new FuzzyRuleAntecedent();
  KadarCO2Tinggi_R30->joinSingle(Tinggi);
  FuzzyRuleAntecedent *if_SuhuNormal_and_KelembabanTerlaluLembab_and_KadarCO2Tinggi_R30 = new FuzzyRuleAntecedent();
  if_SuhuNormal_and_KelembabanTerlaluLembab_and_KadarCO2Tinggi_R30->joinWithAND(if_SuhuNormal_KelembabanTerlaluLembab_R30, KadarCO2Tinggi_R30);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R30 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R30->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R30->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R30->addOutput(Kencang_Masuk);

  FuzzyRule *fuzzyRule30 = new FuzzyRule(30, if_SuhuNormal_and_KelembabanTerlaluLembab_and_KadarCO2Tinggi_R30, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R30);
  fuzzy->addFuzzyRule(fuzzyRule30);

  // ====================
  // Rule 31
  // ====================
  FuzzyRuleAntecedent *if_SuhuPanas_KelembabanKurangLembab_R31 = new FuzzyRuleAntecedent();
  if_SuhuPanas_KelembabanKurangLembab_R31->joinWithAND(Panas, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah_R31 = new FuzzyRuleAntecedent();
  KadarCO2Rendah_R31->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuPanas_and_KelembabanKurangLembab_and_KadarCO2Rendah_R31 = new FuzzyRuleAntecedent();
  if_SuhuPanas_and_KelembabanKurangLembab_and_KadarCO2Rendah_R31->joinWithAND(if_SuhuPanas_KelembabanKurangLembab_R31, KadarCO2Rendah_R31);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukKencang_R31 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukKencang_R31->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukKencang_R31->addOutput(Sedang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukKencang_R31->addOutput(Kencang_Masuk);

  FuzzyRule *fuzzyRule31 = new FuzzyRule(31, if_SuhuPanas_and_KelembabanKurangLembab_and_KadarCO2Rendah_R31, then_VentilasiTerbukaSepenuhnya_KipasBuangSedang_KipasMasukKencang_R31);
  fuzzy->addFuzzyRule(fuzzyRule31);

  // ====================
  // Rule 32
  // ====================
  FuzzyRuleAntecedent *if_SuhuPanas_KelembabanKurangLembab_R32 = new FuzzyRuleAntecedent();
  if_SuhuPanas_KelembabanKurangLembab_R32->joinWithAND(Panas, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Sedang_R32 = new FuzzyRuleAntecedent();
  KadarCO2Sedang_R32->joinSingle(Sedang);
  FuzzyRuleAntecedent *if_SuhuPanas_and_KelembabanKurangLembab_and_KadarCO2Sedang_R32 = new FuzzyRuleAntecedent();
  if_SuhuPanas_and_KelembabanKurangLembab_and_KadarCO2Sedang_R32->joinWithAND(if_SuhuPanas_KelembabanKurangLembab_R32, KadarCO2Sedang_R32);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R32 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R32->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R32->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R32->addOutput(Kencang_Masuk);

  FuzzyRule *fuzzyRule32 = new FuzzyRule(32, if_SuhuPanas_and_KelembabanKurangLembab_and_KadarCO2Sedang_R32, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R32);
  fuzzy->addFuzzyRule(fuzzyRule32);

  // ====================
  // Rule 33
  // ====================
  FuzzyRuleAntecedent *if_SuhuPanas_KelembabanKurangLembab_R33 = new FuzzyRuleAntecedent();
  if_SuhuPanas_KelembabanKurangLembab_R33->joinWithAND(Panas, Kurang_Lembab);
  FuzzyRuleAntecedent *KadarCO2Tinggi_R33 = new FuzzyRuleAntecedent();
  KadarCO2Tinggi_R33->joinSingle(Tinggi);
  FuzzyRuleAntecedent *if_SuhuPanas_and_KelembabanKurangLembab_and_KadarCO2Tinggi_R33 = new FuzzyRuleAntecedent();
  if_SuhuPanas_and_KelembabanKurangLembab_and_KadarCO2Tinggi_R33->joinWithAND(if_SuhuPanas_KelembabanKurangLembab_R33, KadarCO2Tinggi_R33);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R33 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R33->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R33->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R33->addOutput(Kencang_Masuk);

  FuzzyRule *fuzzyRule33 = new FuzzyRule(33, if_SuhuPanas_and_KelembabanKurangLembab_and_KadarCO2Tinggi_R33, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R33);
  fuzzy->addFuzzyRule(fuzzyRule33);

  // ====================
  // Rule 34
  // ====================
  FuzzyRuleAntecedent *if_SuhuPanas_KelembabanLembab_R34 = new FuzzyRuleAntecedent();
  if_SuhuPanas_KelembabanLembab_R34->joinWithAND(Panas, Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah_R34 = new FuzzyRuleAntecedent();
  KadarCO2Rendah_R34->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuPanas_and_KelembabanLembab_and_KadarCO2Rendah_R34 = new FuzzyRuleAntecedent();
  if_SuhuPanas_and_KelembabanLembab_and_KadarCO2Rendah_R34->joinWithAND(if_SuhuPanas_KelembabanLembab_R34, KadarCO2Rendah_R34);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R34 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R34->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R34->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R34->addOutput(Kencang_Masuk);

  FuzzyRule *fuzzyRule34 = new FuzzyRule(34, if_SuhuPanas_and_KelembabanLembab_and_KadarCO2Rendah_R34, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R34);
  fuzzy->addFuzzyRule(fuzzyRule34);

  // ====================
  // Rule 35
  // ====================
  FuzzyRuleAntecedent *if_SuhuPanas_KelembabanLembab_R35 = new FuzzyRuleAntecedent();
  if_SuhuPanas_KelembabanLembab_R35->joinWithAND(Panas, Lembab);
  FuzzyRuleAntecedent *KadarCO2Sedang_R35 = new FuzzyRuleAntecedent();
  KadarCO2Sedang_R35->joinSingle(Sedang);
  FuzzyRuleAntecedent *if_SuhuPanas_and_KelembabanLembab_and_KadarCO2Sedang_R35 = new FuzzyRuleAntecedent();
  if_SuhuPanas_and_KelembabanLembab_and_KadarCO2Sedang_R35->joinWithAND(if_SuhuPanas_KelembabanLembab_R35, KadarCO2Sedang_R35);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R35 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R35->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R35->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R35->addOutput(Kencang_Masuk);

  FuzzyRule *fuzzyRule35 = new FuzzyRule(35, if_SuhuPanas_and_KelembabanLembab_and_KadarCO2Sedang_R35, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R35);
  fuzzy->addFuzzyRule(fuzzyRule35);

  // ====================
  // Rule 36
  // ====================
  FuzzyRuleAntecedent *if_SuhuPanas_KelembabanLembab_R36 = new FuzzyRuleAntecedent();
  if_SuhuPanas_KelembabanLembab_R36->joinWithAND(Panas, Lembab);
  FuzzyRuleAntecedent *KadarCO2Tinggi_R36 = new FuzzyRuleAntecedent();
  KadarCO2Tinggi_R36->joinSingle(Tinggi);
  FuzzyRuleAntecedent *if_SuhuPanas_and_KelembabanLembab_and_KadarCO2Tinggi_R36 = new FuzzyRuleAntecedent();
  if_SuhuPanas_and_KelembabanLembab_and_KadarCO2Tinggi_R36->joinWithAND(if_SuhuPanas_KelembabanLembab_R36, KadarCO2Tinggi_R36);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R36 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R36->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R36->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R36->addOutput(Kencang_Masuk);

  FuzzyRule *fuzzyRule36 = new FuzzyRule(36, if_SuhuPanas_and_KelembabanLembab_and_KadarCO2Tinggi_R36, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R36);
  fuzzy->addFuzzyRule(fuzzyRule36);

  // ====================
  // Rule 37
  // ====================
  FuzzyRuleAntecedent *if_SuhuPanas_KelembabanTerlaluLembab_R37 = new FuzzyRuleAntecedent();
  if_SuhuPanas_KelembabanTerlaluLembab_R37->joinWithAND(Panas, Terlalu_Lembab);
  FuzzyRuleAntecedent *KadarCO2Rendah_R37 = new FuzzyRuleAntecedent();
  KadarCO2Rendah_R37->joinSingle(Rendah);
  FuzzyRuleAntecedent *if_SuhuPanas_and_KelembabanTerlaluLembab_and_KadarCO2Rendah_R37 = new FuzzyRuleAntecedent();
  if_SuhuPanas_and_KelembabanTerlaluLembab_and_KadarCO2Rendah_R37->joinWithAND(if_SuhuPanas_KelembabanTerlaluLembab_R37, KadarCO2Rendah_R37);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R37 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R37->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R37->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R37->addOutput(Sedang_Masuk);

  FuzzyRule *fuzzyRule37 = new FuzzyRule(37, if_SuhuPanas_and_KelembabanTerlaluLembab_and_KadarCO2Rendah_R37, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukSedang_R37);
  fuzzy->addFuzzyRule(fuzzyRule37);

  // ====================
  // Rule 38
  // ====================
  FuzzyRuleAntecedent *if_SuhuPanas_KelembabanTerlaluLembab_R38 = new FuzzyRuleAntecedent();
  if_SuhuPanas_KelembabanTerlaluLembab_R38->joinWithAND(Panas, Terlalu_Lembab);
  FuzzyRuleAntecedent *KadarCO2Sedang_R38 = new FuzzyRuleAntecedent();
  KadarCO2Sedang_R38->joinSingle(Sedang);
  FuzzyRuleAntecedent *if_SuhuPanas_and_KelembabanTerlaluLembab_and_KadarCO2Sedang_R38 = new FuzzyRuleAntecedent();
  if_SuhuPanas_and_KelembabanTerlaluLembab_and_KadarCO2Sedang_R38->joinWithAND(if_SuhuPanas_KelembabanTerlaluLembab_R38, KadarCO2Sedang_R38);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R38 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R38->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R38->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R38->addOutput(Kencang_Masuk);

  FuzzyRule *fuzzyRule38 = new FuzzyRule(38, if_SuhuPanas_and_KelembabanTerlaluLembab_and_KadarCO2Sedang_R38, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R38);
  fuzzy->addFuzzyRule(fuzzyRule38);

  // ====================
  // Rule 39
  // ====================
  FuzzyRuleAntecedent *if_SuhuPanas_KelembabanTerlaluLembab_R39 = new FuzzyRuleAntecedent();
  if_SuhuPanas_KelembabanTerlaluLembab_R39->joinWithAND(Panas, Terlalu_Lembab);
  FuzzyRuleAntecedent *KadarCO2Tinggi_R39 = new FuzzyRuleAntecedent();
  KadarCO2Tinggi_R39->joinSingle(Tinggi);
  FuzzyRuleAntecedent *if_SuhuPanas_and_KelembabanTerlaluLembab_and_KadarCO2Tinggi_R39 = new FuzzyRuleAntecedent();
  if_SuhuPanas_and_KelembabanTerlaluLembab_and_KadarCO2Tinggi_R39->joinWithAND(if_SuhuPanas_KelembabanTerlaluLembab_R39, KadarCO2Tinggi_R39);

  FuzzyRuleConsequent *then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R39 = new FuzzyRuleConsequent();
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R39->addOutput(Terbuka_Sepenuhnya);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R39->addOutput(Kencang_Buang);
  then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R39->addOutput(Kencang_Masuk);

  FuzzyRule *fuzzyRule39 = new FuzzyRule(39, if_SuhuPanas_and_KelembabanTerlaluLembab_and_KadarCO2Tinggi_R39, then_VentilasiTerbukaSepenuhnya_KipasBuangKencang_KipasMasukKencang_R39);
  fuzzy->addFuzzyRule(fuzzyRule39);


}
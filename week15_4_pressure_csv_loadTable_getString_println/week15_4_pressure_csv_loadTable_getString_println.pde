//week15_4_pressure_csv_loadTable_getString_println
Table table=loadTable("pressure.csv","header");

for(TableRow row:table.rows()){//進階的java語法,與c++同 大二上會教
  String t=row.getString("測量日期");
  int up =int(row.getString("收縮壓(mmHg)"));//從Excel把標題copy過來 用字串
  int down=int(row.getString("舒張壓(mmHg)"));//從Excel把標題copy過來 用字串
  println("測量日期:"+t+"收縮壓:"+up+"舒張壓:"+down);
}

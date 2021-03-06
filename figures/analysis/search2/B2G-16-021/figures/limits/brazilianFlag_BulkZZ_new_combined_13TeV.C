{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Nov 24 21:15:26 2016) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "c1",50,72,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0.6857143,-4.905614,4.138095,2.641169);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogy();
   c1->SetGridx();
   c1->SetGridy();
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.04);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.12);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *hframe__10 = new TH1F("hframe__10","",1000,1.1,4);
   hframe__10->SetMinimum(0.0001);
   hframe__10->SetMaximum(109);
   hframe__10->SetDirectory(0);
   hframe__10->SetStats(0);
   hframe__10->SetLineStyle(0);
   hframe__10->SetMarkerStyle(20);
   hframe__10->GetXaxis()->SetTitle("M_{G_{Bulk}} (TeV)");
   hframe__10->GetXaxis()->CenterTitle(true);
   hframe__10->GetXaxis()->SetNdivisions(508);
   hframe__10->GetXaxis()->SetLabelFont(42);
   hframe__10->GetXaxis()->SetLabelOffset(0.007);
   hframe__10->GetXaxis()->SetTitleSize(0.05);
   hframe__10->GetXaxis()->SetTitleOffset(1.05);
   hframe__10->GetXaxis()->SetTitleFont(42);
   hframe__10->GetYaxis()->SetTitle("#sigma_{95%} #times BR(G_{Bulk} #rightarrow ZZ) (pb)");
   hframe__10->GetYaxis()->CenterTitle(true);
   hframe__10->GetYaxis()->SetLabelFont(42);
   hframe__10->GetYaxis()->SetLabelOffset(0.007);
   hframe__10->GetYaxis()->SetTitleSize(0.05);
   hframe__10->GetYaxis()->SetTitleOffset(1.15);
   hframe__10->GetYaxis()->SetTitleFont(42);
   hframe__10->GetZaxis()->SetLabelFont(42);
   hframe__10->GetZaxis()->SetLabelOffset(0.007);
   hframe__10->GetZaxis()->SetLabelSize(0.05);
   hframe__10->GetZaxis()->SetTitleSize(0.06);
   hframe__10->GetZaxis()->SetTitleFont(42);
   hframe__10->Draw(" ");
   
   TGraph *graph = new TGraph(60);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1.1,0.03891064375);
   graph->SetPoint(1,1.2,0.02734964971);
   graph->SetPoint(2,1.3,0.0197470395);
   graph->SetPoint(3,1.4,0.01435036093);
   graph->SetPoint(4,1.5,0.01101990174);
   graph->SetPoint(5,1.6,0.008603133381);
   graph->SetPoint(6,1.7,0.006819850832);
   graph->SetPoint(7,1.8,0.005405459371);
   graph->SetPoint(8,1.9,0.004385179402);
   graph->SetPoint(9,2,0.00365720245);
   graph->SetPoint(10,2.1,0.003106695185);
   graph->SetPoint(11,2.2,0.002693802541);
   graph->SetPoint(12,2.3,0.002355156423);
   graph->SetPoint(13,2.4,0.002070756126);
   graph->SetPoint(14,2.5,0.00184945562);
   graph->SetPoint(15,2.6,0.001662351446);
   graph->SetPoint(16,2.7,0.001503931211);
   graph->SetPoint(17,2.8,0.001370853336);
   graph->SetPoint(18,2.9,0.001253336987);
   graph->SetPoint(19,3,0.001158553149);
   graph->SetPoint(20,3.1,0.001090916612);
   graph->SetPoint(21,3.2,0.001011621126);
   graph->SetPoint(22,3.3,0.0009501555384);
   graph->SetPoint(23,3.4,0.0008918607948);
   graph->SetPoint(24,3.5,0.0008416151162);
   graph->SetPoint(25,3.6,0.0007989062894);
   graph->SetPoint(26,3.7,0.0007464410202);
   graph->SetPoint(27,3.8,0.0007119519961);
   graph->SetPoint(28,3.9,0.0006737067418);
   graph->SetPoint(29,4,0.0006495595467);
   graph->SetPoint(30,4,0.005090994901);
   graph->SetPoint(31,3.9,0.005210159174);
   graph->SetPoint(32,3.8,0.005322500341);
   graph->SetPoint(33,3.7,0.005500445046);
   graph->SetPoint(34,3.6,0.005731933716);
   graph->SetPoint(35,3.5,0.005947422431);
   graph->SetPoint(36,3.4,0.006210269527);
   graph->SetPoint(37,3.3,0.006490169056);
   graph->SetPoint(38,3.2,0.006799109245);
   graph->SetPoint(39,3.1,0.007195006776);
   graph->SetPoint(40,3,0.00754896441);
   graph->SetPoint(41,2.9,0.008014749778);
   graph->SetPoint(42,2.8,0.008615739315);
   graph->SetPoint(43,2.7,0.009281047589);
   graph->SetPoint(44,2.6,0.01002861609);
   graph->SetPoint(45,2.5,0.0110086111);
   graph->SetPoint(46,2.4,0.01209160548);
   graph->SetPoint(47,2.3,0.01339905657);
   graph->SetPoint(48,2.2,0.01503045448);
   graph->SetPoint(49,2.1,0.01699617519);
   graph->SetPoint(50,2,0.01957831891);
   graph->SetPoint(51,1.9,0.02292878368);
   graph->SetPoint(52,1.8,0.02769679613);
   graph->SetPoint(53,1.7,0.03405315253);
   graph->SetPoint(54,1.6,0.04242104589);
   graph->SetPoint(55,1.5,0.0534719097);
   graph->SetPoint(56,1.4,0.06884471165);
   graph->SetPoint(57,1.3,0.09251312391);
   graph->SetPoint(58,1.2,0.1272619913);
   graph->SetPoint(59,1.1,0.1804021234);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Graph",100,0.81,4.29);
   Graph_Graph10->SetMinimum(0.0005846036);
   Graph_Graph10->SetMaximum(0.1983774);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);
   Graph_Graph10->SetLineStyle(0);
   Graph_Graph10->SetMarkerStyle(20);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   graph->Draw("f");
   
   graph = new TGraph(60);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1.1,0.05315701564);
   graph->SetPoint(1,1.2,0.03763025946);
   graph->SetPoint(2,1.3,0.02709089666);
   graph->SetPoint(3,1.4,0.01977127573);
   graph->SetPoint(4,1.5,0.01518272084);
   graph->SetPoint(5,1.6,0.01195624947);
   graph->SetPoint(6,1.7,0.009449341343);
   graph->SetPoint(7,1.8,0.007555895143);
   graph->SetPoint(8,1.9,0.006138014534);
   graph->SetPoint(9,2,0.005153865721);
   graph->SetPoint(10,2.1,0.004408398516);
   graph->SetPoint(11,2.2,0.003840411975);
   graph->SetPoint(12,2.3,0.00337354974);
   graph->SetPoint(13,2.4,0.002974609418);
   graph->SetPoint(14,2.5,0.002669605649);
   graph->SetPoint(15,2.6,0.002417300998);
   graph->SetPoint(16,2.7,0.002192391219);
   graph->SetPoint(17,2.8,0.002018746361);
   graph->SetPoint(18,2.9,0.001855252929);
   graph->SetPoint(19,3,0.001723955452);
   graph->SetPoint(20,3.1,0.001619050525);
   graph->SetPoint(21,3.2,0.001517394035);
   graph->SetPoint(22,3.3,0.00142519794);
   graph->SetPoint(23,3.4,0.001352436832);
   graph->SetPoint(24,3.5,0.001261592767);
   graph->SetPoint(25,3.6,0.001197571678);
   graph->SetPoint(26,3.7,0.001131266971);
   graph->SetPoint(27,3.8,0.001078997135);
   graph->SetPoint(28,3.9,0.001032623545);
   graph->SetPoint(29,4,0.0009956120233);
   graph->SetPoint(30,4,0.002978544313);
   graph->SetPoint(31,3.9,0.003061494502);
   graph->SetPoint(32,3.8,0.003142453156);
   graph->SetPoint(33,3.7,0.003264516922);
   graph->SetPoint(34,3.6,0.003426126598);
   graph->SetPoint(35,3.5,0.003575932808);
   graph->SetPoint(36,3.4,0.003789421148);
   graph->SetPoint(37,3.3,0.003960211941);
   graph->SetPoint(38,3.2,0.004177073266);
   graph->SetPoint(39,3.1,0.004420295278);
   graph->SetPoint(40,3,0.004671988931);
   graph->SetPoint(41,2.9,0.004959610379);
   graph->SetPoint(42,2.8,0.005374640598);
   graph->SetPoint(43,2.7,0.005789670513);
   graph->SetPoint(44,2.6,0.006309584623);
   graph->SetPoint(45,2.5,0.006926156419);
   graph->SetPoint(46,2.4,0.007612126399);
   graph->SetPoint(47,2.3,0.008507670251);
   graph->SetPoint(48,2.2,0.009553073668);
   graph->SetPoint(49,2.1,0.01081563598);
   graph->SetPoint(50,2,0.01257168098);
   graph->SetPoint(51,1.9,0.01477506131);
   graph->SetPoint(52,1.8,0.01788121745);
   graph->SetPoint(53,1.7,0.02219466993);
   graph->SetPoint(54,1.6,0.02771388698);
   graph->SetPoint(55,1.5,0.03493347145);
   graph->SetPoint(56,1.4,0.04525778031);
   graph->SetPoint(57,1.3,0.06114819568);
   graph->SetPoint(58,1.2,0.08424901715);
   graph->SetPoint(59,1.1,0.1195447234);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,0.81,4.29);
   Graph_Graph11->SetMinimum(0.0008960508);
   Graph_Graph11->SetMaximum(0.1313996);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);
   Graph_Graph11->SetLineStyle(0);
   Graph_Graph11->SetMarkerStyle(20);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw("f");
   
   TGraphErrors *gre = new TGraphErrors(30);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1.1,0.07812647);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.2,0.05534791);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.3,0.03996239);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.4,0.02927245);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.5,0.02247884);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,1.6,0.01783322);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,1.7,0.01413669);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,1.8,0.01138928);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,1.9,0.009316232);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2,0.007867595);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,2.1,0.00676863);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,2.2,0.005919429);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,2.3,0.005220087);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,2.4,0.004670604);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,2.5,0.004208539);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,2.6,0.003833892);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,2.7,0.003484221);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,2.8,0.003234456);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,2.9,0.002984691);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,3,0.002784879);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,3.1,0.002610043);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,3.2,0.002466429);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,3.3,0.00231657);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,3.4,0.002216664);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,3.5,0.002091781);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,3.6,0.001985631);
   gre->SetPointError(25,0,0);
   gre->SetPoint(26,3.7,0.001891969);
   gre->SetPointError(26,0,0);
   gre->SetPoint(27,3.8,0.001804552);
   gre->SetPointError(27,0,0);
   gre->SetPoint(28,3.9,0.00174211);
   gre->SetPointError(28,0,0);
   gre->SetPoint(29,4,0.001679669);
   gre->SetPointError(29,0,0);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Graph",100,0.81,4.29);
   Graph_Graph10->SetMinimum(0.001511702);
   Graph_Graph10->SetMaximum(0.08577115);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);
   Graph_Graph10->SetLineStyle(0);
   Graph_Graph10->SetMarkerStyle(20);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph10);
   
   gre->Draw("l");
   
   gre = new TGraphErrors(30);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(0.8);
   gre->SetPoint(0,1.1,0.06151146);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.2,0.04679072);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.3,0.02974976);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.4,0.02424536);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.5,0.0147114);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,1.6,0.01747742);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,1.7,0.01731505);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,1.8,0.02026246);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,1.9,0.01954856);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2,0.01754186);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,2.1,0.007310763);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,2.2,0.00551899);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,2.3,0.006302836);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,2.4,0.005799027);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,2.5,0.00438491);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,2.6,0.002986909);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,2.7,0.004609025);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,2.8,0.004862864);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,2.9,0.004564069);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,3,0.004073803);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,3.1,0.003132363);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,3.2,0.00226293);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,3.3,0.001954607);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,3.4,0.001651666);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,3.5,0.001411444);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,3.6,0.001347412);
   gre->SetPointError(25,0,0);
   gre->SetPoint(26,3.7,0.001565211);
   gre->SetPointError(26,0,0);
   gre->SetPoint(27,3.8,0.001793219);
   gre->SetPointError(27,0,0);
   gre->SetPoint(28,3.9,0.001996199);
   gre->SetPointError(28,0,0);
   gre->SetPoint(29,4,0.002048144);
   gre->SetPointError(29,0,0);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,0.81,4.29);
   Graph_Graph11->SetMinimum(0.00121267);
   Graph_Graph11->SetMaximum(0.06752786);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);
   Graph_Graph11->SetLineStyle(0);
   Graph_Graph11->SetMarkerStyle(20);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11);
   
   gre->Draw("lp");
   
   gre = new TGraphErrors(11);
   gre->SetName("BulkZZ_gtheory");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);
   gre->SetPoint(0,1,0.01024985);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.2,0.00341978);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.4,0.00130687);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.6,0.0005741872);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.8,0.0002441465);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,2,0.0001197594);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,2.5,2.242854e-05);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,3,4.91243e-06);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,3.5,2.098791e-06);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,4,1.219122e-06);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,4.5,1.044836e-06);
   gre->SetPointError(10,0,0);
   
   TH1F *Graph_BulkZZ_gtheory12 = new TH1F("Graph_BulkZZ_gtheory12","Graph",100,0.65,4.85);
   Graph_BulkZZ_gtheory12->SetMinimum(9.403527e-07);
   Graph_BulkZZ_gtheory12->SetMaximum(0.01127473);
   Graph_BulkZZ_gtheory12->SetDirectory(0);
   Graph_BulkZZ_gtheory12->SetStats(0);
   Graph_BulkZZ_gtheory12->SetLineStyle(0);
   Graph_BulkZZ_gtheory12->SetMarkerStyle(20);
   Graph_BulkZZ_gtheory12->GetXaxis()->SetLabelFont(42);
   Graph_BulkZZ_gtheory12->GetXaxis()->SetLabelOffset(0.007);
   Graph_BulkZZ_gtheory12->GetXaxis()->SetLabelSize(0.05);
   Graph_BulkZZ_gtheory12->GetXaxis()->SetTitleSize(0.06);
   Graph_BulkZZ_gtheory12->GetXaxis()->SetTitleOffset(0.9);
   Graph_BulkZZ_gtheory12->GetXaxis()->SetTitleFont(42);
   Graph_BulkZZ_gtheory12->GetYaxis()->SetLabelFont(42);
   Graph_BulkZZ_gtheory12->GetYaxis()->SetLabelOffset(0.007);
   Graph_BulkZZ_gtheory12->GetYaxis()->SetLabelSize(0.05);
   Graph_BulkZZ_gtheory12->GetYaxis()->SetTitleSize(0.06);
   Graph_BulkZZ_gtheory12->GetYaxis()->SetTitleOffset(1.25);
   Graph_BulkZZ_gtheory12->GetYaxis()->SetTitleFont(42);
   Graph_BulkZZ_gtheory12->GetZaxis()->SetLabelFont(42);
   Graph_BulkZZ_gtheory12->GetZaxis()->SetLabelOffset(0.007);
   Graph_BulkZZ_gtheory12->GetZaxis()->SetLabelSize(0.05);
   Graph_BulkZZ_gtheory12->GetZaxis()->SetTitleSize(0.06);
   Graph_BulkZZ_gtheory12->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_BulkZZ_gtheory12);
   
   gre->Draw("l");
   
   graph = new TGraph(22);
   graph->SetName("BulkZZ_grshade");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3013);
   graph->SetLineColor(0);
   graph->SetPoint(0,1,0.01340070413);
   graph->SetPoint(1,1.2,0.004611355933);
   graph->SetPoint(2,1.4,0.001811762523);
   graph->SetPoint(3,1.6,0.0008217326073);
   graph->SetPoint(4,1.8,0.0003600711002);
   graph->SetPoint(5,2,0.000181829402);
   graph->SetPoint(6,2.5,3.647573167e-05);
   graph->SetPoint(7,3,8.680006842e-06);
   graph->SetPoint(8,3.5,4.007235056e-06);
   graph->SetPoint(9,4,2.568563308e-06);
   graph->SetPoint(10,4.5,2.408993657e-06);
   graph->SetPoint(11,4.5,9.808327677e-08);
   graph->SetPoint(12,4,2.553502151e-07);
   graph->SetPoint(13,3.5,6.90456252e-07);
   graph->SetPoint(14,3,2.047999781e-06);
   graph->SetPoint(15,2.5,1.139506285e-05);
   graph->SetPoint(16,2,6.948064143e-05);
   graph->SetPoint(17,1.8,0.0001489809709);
   graph->SetPoint(18,1.6,0.0003680936088);
   graph->SetPoint(19,1.4,0.0008800111151);
   graph->SetPoint(20,1.2,0.002397691255);
   graph->SetPoint(21,1,0.007501345606);
   
   TH1F *Graph_BulkZZ_grshade12 = new TH1F("Graph_BulkZZ_grshade12","Graph",100,0.65,4.85);
   Graph_BulkZZ_grshade12->SetMinimum(8.827495e-08);
   Graph_BulkZZ_grshade12->SetMaximum(0.01474076);
   Graph_BulkZZ_grshade12->SetDirectory(0);
   Graph_BulkZZ_grshade12->SetStats(0);
   Graph_BulkZZ_grshade12->SetLineStyle(0);
   Graph_BulkZZ_grshade12->SetMarkerStyle(20);
   Graph_BulkZZ_grshade12->GetXaxis()->SetLabelFont(42);
   Graph_BulkZZ_grshade12->GetXaxis()->SetLabelOffset(0.007);
   Graph_BulkZZ_grshade12->GetXaxis()->SetLabelSize(0.05);
   Graph_BulkZZ_grshade12->GetXaxis()->SetTitleSize(0.06);
   Graph_BulkZZ_grshade12->GetXaxis()->SetTitleOffset(0.9);
   Graph_BulkZZ_grshade12->GetXaxis()->SetTitleFont(42);
   Graph_BulkZZ_grshade12->GetYaxis()->SetLabelFont(42);
   Graph_BulkZZ_grshade12->GetYaxis()->SetLabelOffset(0.007);
   Graph_BulkZZ_grshade12->GetYaxis()->SetLabelSize(0.05);
   Graph_BulkZZ_grshade12->GetYaxis()->SetTitleSize(0.06);
   Graph_BulkZZ_grshade12->GetYaxis()->SetTitleOffset(1.25);
   Graph_BulkZZ_grshade12->GetYaxis()->SetTitleFont(42);
   Graph_BulkZZ_grshade12->GetZaxis()->SetLabelFont(42);
   Graph_BulkZZ_grshade12->GetZaxis()->SetLabelOffset(0.007);
   Graph_BulkZZ_grshade12->GetZaxis()->SetLabelSize(0.05);
   Graph_BulkZZ_grshade12->GetZaxis()->SetTitleSize(0.06);
   Graph_BulkZZ_grshade12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_BulkZZ_grshade12);
   
   graph->Draw("f");
   
   TPaveText *pt = new TPaveText(0.6946309,0.5437063,0.795302,0.6363636,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   TText *text = pt->AddText("WW+WZ+ZZ");
   text = pt->AddText("HP+LP");
   pt->Draw();
      tex = new TLatex(0.96,0.936,"12.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.892,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.82,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe__11 = new TH1F("hframe__11","",1000,1.1,4);
   hframe__11->SetMinimum(0.0001);
   hframe__11->SetMaximum(109);
   hframe__11->SetDirectory(0);
   hframe__11->SetStats(0);
   hframe__11->SetLineStyle(0);
   hframe__11->SetMarkerStyle(20);
   hframe__11->GetXaxis()->SetTitle("M_{G_{Bulk}} (TeV)");
   hframe__11->GetXaxis()->CenterTitle(true);
   hframe__11->GetXaxis()->SetNdivisions(508);
   hframe__11->GetXaxis()->SetLabelFont(42);
   hframe__11->GetXaxis()->SetLabelOffset(0.007);
   hframe__11->GetXaxis()->SetTitleSize(0.05);
   hframe__11->GetXaxis()->SetTitleOffset(1.05);
   hframe__11->GetXaxis()->SetTitleFont(42);
   hframe__11->GetYaxis()->SetTitle("#sigma_{95%} #times BR(G_{Bulk} #rightarrow ZZ) (pb)");
   hframe__11->GetYaxis()->CenterTitle(true);
   hframe__11->GetYaxis()->SetLabelFont(42);
   hframe__11->GetYaxis()->SetLabelOffset(0.007);
   hframe__11->GetYaxis()->SetTitleSize(0.05);
   hframe__11->GetYaxis()->SetTitleOffset(1.15);
   hframe__11->GetYaxis()->SetTitleFont(42);
   hframe__11->GetZaxis()->SetLabelFont(42);
   hframe__11->GetZaxis()->SetLabelOffset(0.007);
   hframe__11->GetZaxis()->SetLabelSize(0.05);
   hframe__11->GetZaxis()->SetTitleSize(0.06);
   hframe__11->GetZaxis()->SetTitleFont(42);
   hframe__11->Draw("sameaxis");
   
   TH1F *hframe__12 = new TH1F("hframe__12","",1000,1.1,4);
   hframe__12->SetMinimum(0.0001);
   hframe__12->SetMaximum(109);
   hframe__12->SetDirectory(0);
   hframe__12->SetStats(0);
   hframe__12->SetLineStyle(0);
   hframe__12->SetMarkerStyle(20);
   hframe__12->GetXaxis()->SetTitle("M_{G_{Bulk}} (TeV)");
   hframe__12->GetXaxis()->CenterTitle(true);
   hframe__12->GetXaxis()->SetNdivisions(508);
   hframe__12->GetXaxis()->SetLabelFont(42);
   hframe__12->GetXaxis()->SetLabelOffset(0.007);
   hframe__12->GetXaxis()->SetTitleSize(0.05);
   hframe__12->GetXaxis()->SetTitleOffset(1.05);
   hframe__12->GetXaxis()->SetTitleFont(42);
   hframe__12->GetYaxis()->SetTitle("#sigma_{95%} #times BR(G_{Bulk} #rightarrow ZZ) (pb)");
   hframe__12->GetYaxis()->CenterTitle(true);
   hframe__12->GetYaxis()->SetLabelFont(42);
   hframe__12->GetYaxis()->SetLabelOffset(0.007);
   hframe__12->GetYaxis()->SetTitleSize(0.05);
   hframe__12->GetYaxis()->SetTitleOffset(1.15);
   hframe__12->GetYaxis()->SetTitleFont(42);
   hframe__12->GetZaxis()->SetLabelFont(42);
   hframe__12->GetZaxis()->SetLabelOffset(0.007);
   hframe__12->GetZaxis()->SetLabelSize(0.05);
   hframe__12->GetZaxis()->SetTitleSize(0.06);
   hframe__12->GetZaxis()->SetTitleFont(42);
   hframe__12->Draw("sameaxig");
   
   TLegend *leg = new TLegend(0.498995,0.6602591,0.9446734,0.9011917,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.028);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph3","Observed","Lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","Expected #pm 1 std. deviation","f");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","Expected #pm 2 std. deviation","f");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("BulkZZ_gtheory","#sigma_{TH}#timesBR(G_{Bulk}#rightarrowZZ) #tilde{k}=0.5","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   leg = new TLegend(0.498995,0.6602591,0.9446734,0.9011917,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.028);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("Graph3"," ","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2"," ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2"," ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("BulkZZ_grshade"," ","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}

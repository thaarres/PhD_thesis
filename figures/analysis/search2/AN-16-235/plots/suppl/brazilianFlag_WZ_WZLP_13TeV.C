{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Nov 15 12:56:36 2016) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "c1",50,72,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0.6571429,-4.743136,4.347619,1.449667);
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
   
   TH1F *hframe__31 = new TH1F("hframe__31","",1000,1.1,4.2);
   hframe__31->SetMinimum(0.0001);
   hframe__31->SetMaximum(9);
   hframe__31->SetDirectory(0);
   hframe__31->SetStats(0);
   hframe__31->SetLineStyle(0);
   hframe__31->SetMarkerStyle(20);
   hframe__31->GetXaxis()->SetTitle("M_{W'} (TeV)");
   hframe__31->GetXaxis()->CenterTitle(true);
   hframe__31->GetXaxis()->SetNdivisions(508);
   hframe__31->GetXaxis()->SetLabelFont(42);
   hframe__31->GetXaxis()->SetLabelOffset(0.007);
   hframe__31->GetXaxis()->SetTitleSize(0.05);
   hframe__31->GetXaxis()->SetTitleOffset(1.05);
   hframe__31->GetXaxis()->SetTitleFont(42);
   hframe__31->GetYaxis()->SetTitle("#sigma_{95%} #times BR(W' #rightarrow WZ) [pb]");
   hframe__31->GetYaxis()->CenterTitle(true);
   hframe__31->GetYaxis()->SetLabelFont(42);
   hframe__31->GetYaxis()->SetLabelOffset(0.007);
   hframe__31->GetYaxis()->SetTitleSize(0.05);
   hframe__31->GetYaxis()->SetTitleOffset(1.15);
   hframe__31->GetYaxis()->SetTitleFont(42);
   hframe__31->GetZaxis()->SetLabelFont(42);
   hframe__31->GetZaxis()->SetLabelOffset(0.007);
   hframe__31->GetZaxis()->SetLabelSize(0.05);
   hframe__31->GetZaxis()->SetTitleSize(0.06);
   hframe__31->GetZaxis()->SetTitleFont(42);
   hframe__31->Draw(" ");
   
   TGraph *graph = new TGraph(64);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1.1,0.2487975895);
   graph->SetPoint(1,1.2,0.180722679);
   graph->SetPoint(2,1.3,0.1263247426);
   graph->SetPoint(3,1.4,0.09080852101);
   graph->SetPoint(4,1.5,0.06853742854);
   graph->SetPoint(5,1.6,0.05366420358);
   graph->SetPoint(6,1.7,0.0432127482);
   graph->SetPoint(7,1.8,0.03457019856);
   graph->SetPoint(8,1.9,0.02821158412);
   graph->SetPoint(9,2,0.022828455);
   graph->SetPoint(10,2.1,0.01958860876);
   graph->SetPoint(11,2.2,0.01616694369);
   graph->SetPoint(12,2.3,0.01359605356);
   graph->SetPoint(13,2.4,0.01161844577);
   graph->SetPoint(14,2.5,0.01001113495);
   graph->SetPoint(15,2.6,0.008657179901);
   graph->SetPoint(16,2.7,0.007612377418);
   graph->SetPoint(17,2.8,0.006886918233);
   graph->SetPoint(18,2.9,0.006283445162);
   graph->SetPoint(19,3,0.00552468952);
   graph->SetPoint(20,3.1,0.005011116884);
   graph->SetPoint(21,3.2,0.004500621649);
   graph->SetPoint(22,3.3,0.004188543032);
   graph->SetPoint(23,3.4,0.003841503134);
   graph->SetPoint(24,3.5,0.003568623528);
   graph->SetPoint(25,3.6,0.003338978868);
   graph->SetPoint(26,3.7,0.003140209106);
   graph->SetPoint(27,3.8,0.00296989268);
   graph->SetPoint(28,3.9,0.002767389678);
   graph->SetPoint(29,4,0.002575178308);
   graph->SetPoint(30,4.1,0.002468125152);
   graph->SetPoint(31,4.2,0.002423528078);
   graph->SetPoint(32,4.2,0.01871347443);
   graph->SetPoint(33,4.1,0.01886929681);
   graph->SetPoint(34,4,0.01949566372);
   graph->SetPoint(35,3.9,0.02074754494);
   graph->SetPoint(36,3.8,0.02184274363);
   graph->SetPoint(37,3.7,0.02309537403);
   graph->SetPoint(38,3.6,0.02355148505);
   graph->SetPoint(39,3.5,0.02476993361);
   graph->SetPoint(40,3.4,0.02574304781);
   graph->SetPoint(41,3.3,0.02727769163);
   graph->SetPoint(42,3.2,0.02838168109);
   graph->SetPoint(43,3.1,0.03079987165);
   graph->SetPoint(44,3,0.03307899148);
   graph->SetPoint(45,2.9,0.03670499842);
   graph->SetPoint(46,2.8,0.03950153007);
   graph->SetPoint(47,2.7,0.04311805509);
   graph->SetPoint(48,2.6,0.0479183499);
   graph->SetPoint(49,2.5,0.05448955718);
   graph->SetPoint(50,2.4,0.06206290207);
   graph->SetPoint(51,2.3,0.07198619995);
   graph->SetPoint(52,2.2,0.08468805696);
   graph->SetPoint(53,2.1,0.100734074);
   graph->SetPoint(54,2,0.1173949252);
   graph->SetPoint(55,1.9,0.1435551448);
   graph->SetPoint(56,1.8,0.1744981181);
   graph->SetPoint(57,1.7,0.215493968);
   graph->SetPoint(58,1.6,0.267977681);
   graph->SetPoint(59,1.5,0.3422486788);
   graph->SetPoint(60,1.4,0.4559450638);
   graph->SetPoint(61,1.3,0.6274382472);
   graph->SetPoint(62,1.2,0.8854853504);
   graph->SetPoint(63,1.1,1.232496674);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","Graph",100,0.79,4.51);
   Graph_Graph21->SetMinimum(0.002181175);
   Graph_Graph21->SetMaximum(1.355504);
   Graph_Graph21->SetDirectory(0);
   Graph_Graph21->SetStats(0);
   Graph_Graph21->SetLineStyle(0);
   Graph_Graph21->SetMarkerStyle(20);
   Graph_Graph21->GetXaxis()->SetLabelFont(42);
   Graph_Graph21->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph21->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph21->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph21->GetXaxis()->SetTitleFont(42);
   Graph_Graph21->GetYaxis()->SetLabelFont(42);
   Graph_Graph21->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph21->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph21->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph21->GetYaxis()->SetTitleFont(42);
   Graph_Graph21->GetZaxis()->SetLabelFont(42);
   Graph_Graph21->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph21->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph21->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph21);
   
   graph->Draw("f");
   
   graph = new TGraph(64);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1.1,0.3427820275);
   graph->SetPoint(1,1.2,0.2489914959);
   graph->SetPoint(2,1.3,0.1744189331);
   graph->SetPoint(3,1.4,0.1253810301);
   graph->SetPoint(4,1.5,0.0948356973);
   graph->SetPoint(5,1.6,0.07425552003);
   graph->SetPoint(6,1.7,0.05943718882);
   graph->SetPoint(7,1.8,0.04783501291);
   graph->SetPoint(8,1.9,0.03920719443);
   graph->SetPoint(9,2,0.03172596469);
   graph->SetPoint(10,2.1,0.02705918111);
   graph->SetPoint(11,2.2,0.02256747635);
   graph->SetPoint(12,2.3,0.01892088614);
   graph->SetPoint(13,2.4,0.01611929696);
   graph->SetPoint(14,2.5,0.01398152438);
   graph->SetPoint(15,2.6,0.01217231973);
   graph->SetPoint(16,2.7,0.01072764445);
   graph->SetPoint(17,2.8,0.009665091423);
   graph->SetPoint(18,2.9,0.008858341586);
   graph->SetPoint(19,3,0.00782457486);
   graph->SetPoint(20,3.1,0.007130350654);
   graph->SetPoint(21,3.2,0.006465074186);
   graph->SetPoint(22,3.3,0.006045972682);
   graph->SetPoint(23,3.4,0.005546900401);
   graph->SetPoint(24,3.5,0.005191193965);
   graph->SetPoint(25,3.6,0.004881585781);
   graph->SetPoint(26,3.7,0.004627587727);
   graph->SetPoint(27,3.8,0.004376599911);
   graph->SetPoint(28,3.9,0.004121265269);
   graph->SetPoint(29,4,0.003855652237);
   graph->SetPoint(30,4.1,0.003686182411);
   graph->SetPoint(31,4.2,0.003639295575);
   graph->SetPoint(32,4.2,0.01124246823);
   graph->SetPoint(33,4.1,0.01123729466);
   graph->SetPoint(34,4,0.01161031715);
   graph->SetPoint(35,3.9,0.01224722415);
   graph->SetPoint(36,3.8,0.01277934443);
   graph->SetPoint(37,3.7,0.01351221081);
   graph->SetPoint(38,3.6,0.01359342012);
   graph->SetPoint(39,3.5,0.01439565538);
   graph->SetPoint(40,3.4,0.01514576656);
   graph->SetPoint(41,3.3,0.01614187423);
   graph->SetPoint(42,3.2,0.01702989959);
   graph->SetPoint(43,3.1,0.01854467905);
   graph->SetPoint(44,3,0.01997941963);
   graph->SetPoint(45,2.9,0.02252998252);
   graph->SetPoint(46,2.8,0.02424819829);
   graph->SetPoint(47,2.7,0.02668985529);
   graph->SetPoint(48,2.6,0.02993035231);
   graph->SetPoint(49,2.5,0.03418229735);
   graph->SetPoint(50,2.4,0.03879745629);
   graph->SetPoint(51,2.3,0.04540127896);
   graph->SetPoint(52,2.2,0.05358223375);
   graph->SetPoint(53,2.1,0.06407329174);
   graph->SetPoint(54,2,0.07467065623);
   graph->SetPoint(55,1.9,0.09181238903);
   graph->SetPoint(56,1.8,0.1116023304);
   graph->SetPoint(57,1.7,0.1380862017);
   graph->SetPoint(58,1.6,0.1723634721);
   graph->SetPoint(59,1.5,0.2201346265);
   graph->SetPoint(60,1.4,0.2905002323);
   graph->SetPoint(61,1.3,0.4020556147);
   graph->SetPoint(62,1.2,0.5728971562);
   graph->SetPoint(63,1.1,0.7927428904);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","Graph",100,0.79,4.51);
   Graph_Graph22->SetMinimum(0.003275366);
   Graph_Graph22->SetMaximum(0.8716532);
   Graph_Graph22->SetDirectory(0);
   Graph_Graph22->SetStats(0);
   Graph_Graph22->SetLineStyle(0);
   Graph_Graph22->SetMarkerStyle(20);
   Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph22->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph22->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph22->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph22->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph22->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph22->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph22->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph22->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph22->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph22->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph22->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph22);
   
   graph->Draw("f");
   
   TGraphErrors *gre = new TGraphErrors(32);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1.1,0.5075074);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.2,0.3686455);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.3,0.2587131);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.4,0.1859759);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.5,0.1409284);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,1.6,0.1103457);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,1.7,0.08885513);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,1.8,0.0710841);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,1.9,0.05847907);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2,0.04732052);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,2.1,0.04060473);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,2.2,0.03378561);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,2.3,0.02841298);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,2.4,0.02428018);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,2.5,0.02118058);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,2.6,0.01854593);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,2.7,0.01637621);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,2.8,0.01487807);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,2.9,0.01368989);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,3,0.01214009);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,3.1,0.01110689);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,3.2,0.01015118);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,3.3,0.009531262);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,3.4,0.008859683);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,3.5,0.008343083);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,3.6,0.007878144);
   gre->SetPointError(25,0,0);
   gre->SetPoint(26,3.7,0.007619844);
   gre->SetPointError(26,0,0);
   gre->SetPoint(27,3.8,0.007206564);
   gre->SetPointError(27,0,0);
   gre->SetPoint(28,3.9,0.006844945);
   gre->SetPointError(28,0,0);
   gre->SetPoint(29,4,0.006431665);
   gre->SetPointError(29,0,0);
   gre->SetPoint(30,4.1,0.006225025);
   gre->SetPointError(30,0,0);
   gre->SetPoint(31,4.2,0.006173365);
   gre->SetPointError(31,0,0);
   
   TH1F *Graph_Graph31 = new TH1F("Graph_Graph31","Graph",100,0.79,4.51);
   Graph_Graph31->SetMinimum(0.005556029);
   Graph_Graph31->SetMaximum(0.5576408);
   Graph_Graph31->SetDirectory(0);
   Graph_Graph31->SetStats(0);
   Graph_Graph31->SetLineStyle(0);
   Graph_Graph31->SetMarkerStyle(20);
   Graph_Graph31->GetXaxis()->SetLabelFont(42);
   Graph_Graph31->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph31->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph31->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph31->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph31->GetXaxis()->SetTitleFont(42);
   Graph_Graph31->GetYaxis()->SetLabelFont(42);
   Graph_Graph31->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph31->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph31->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph31->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph31->GetYaxis()->SetTitleFont(42);
   Graph_Graph31->GetZaxis()->SetLabelFont(42);
   Graph_Graph31->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph31->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph31->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph31->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31);
   
   gre->Draw("l");
   
   gre = new TGraphErrors(32);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(0.8);
   gre->SetPoint(0,1.1,0.7838902);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.2,0.6517828);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.3,0.156995);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.4,0.1241737);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.5,0.1351751);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,1.6,0.1378107);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,1.7,0.09807286);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,1.8,0.06320387);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,1.9,0.0382805);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2,0.06245259);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,2.1,0.05603001);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,2.2,0.04153158);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,2.3,0.03196942);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,2.4,0.02459461);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,2.5,0.01907095);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,2.6,0.0149412);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,2.7,0.01355391);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,2.8,0.01518231);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,2.9,0.01454166);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,3,0.01369515);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,3.1,0.01556321);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,3.2,0.01562077);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,3.3,0.01507589);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,3.4,0.01251615);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,3.5,0.007930127);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,3.6,0.005762403);
   gre->SetPointError(25,0,0);
   gre->SetPoint(26,3.7,0.005092155);
   gre->SetPointError(26,0,0);
   gre->SetPoint(27,3.8,0.005383039);
   gre->SetPointError(27,0,0);
   gre->SetPoint(28,3.9,0.007081255);
   gre->SetPointError(28,0,0);
   gre->SetPoint(29,4,0.007605663);
   gre->SetPointError(29,0,0);
   gre->SetPoint(30,4.1,0.007738017);
   gre->SetPointError(30,0,0);
   gre->SetPoint(31,4.2,0.007925006);
   gre->SetPointError(31,0,0);
   
   TH1F *Graph_Graph32 = new TH1F("Graph_Graph32","Graph",100,0.79,4.51);
   Graph_Graph32->SetMinimum(0.004582939);
   Graph_Graph32->SetMaximum(0.86177);
   Graph_Graph32->SetDirectory(0);
   Graph_Graph32->SetStats(0);
   Graph_Graph32->SetLineStyle(0);
   Graph_Graph32->SetMarkerStyle(20);
   Graph_Graph32->GetXaxis()->SetLabelFont(42);
   Graph_Graph32->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph32->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph32->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph32->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph32->GetXaxis()->SetTitleFont(42);
   Graph_Graph32->GetYaxis()->SetLabelFont(42);
   Graph_Graph32->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph32->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph32->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph32->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph32->GetYaxis()->SetTitleFont(42);
   Graph_Graph32->GetZaxis()->SetLabelFont(42);
   Graph_Graph32->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph32->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph32->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph32->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph32);
   
   gre->Draw("lp");
   
   gre = new TGraphErrors(11);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1,0.4541593);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.2,0.2503529);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.4,0.1389695);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.6,0.07926706);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.8,0.04645925);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,2,0.02786481);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,2.5,0.008370229);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,3,0.002682795);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,3.5,0.0008880529);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,4,0.0002883071);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,4.5,8.880529e-05);
   gre->SetPointError(10,0,0);
   
   TH1F *Graph_Graph33 = new TH1F("Graph_Graph33","Graph",100,0.65,4.85);
   Graph_Graph33->SetMinimum(7.992476e-05);
   Graph_Graph33->SetMaximum(0.4995664);
   Graph_Graph33->SetDirectory(0);
   Graph_Graph33->SetStats(0);
   Graph_Graph33->SetLineStyle(0);
   Graph_Graph33->SetMarkerStyle(20);
   Graph_Graph33->GetXaxis()->SetLabelFont(42);
   Graph_Graph33->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph33->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph33->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph33->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph33->GetXaxis()->SetTitleFont(42);
   Graph_Graph33->GetYaxis()->SetLabelFont(42);
   Graph_Graph33->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph33->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph33->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph33->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph33->GetYaxis()->SetTitleFont(42);
   Graph_Graph33->GetZaxis()->SetLabelFont(42);
   Graph_Graph33->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph33->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph33->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph33->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph33);
   
   gre->Draw("l");
   
   TPaveText *pt = new TPaveText(0.6946309,0.5437063,0.795302,0.6363636,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   TText *text = pt->AddText("WZ enriched");
   text = pt->AddText("Low-purity");
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
   
   TH1F *hframe__32 = new TH1F("hframe__32","",1000,1.1,4.2);
   hframe__32->SetMinimum(0.0001);
   hframe__32->SetMaximum(9);
   hframe__32->SetDirectory(0);
   hframe__32->SetStats(0);
   hframe__32->SetLineStyle(0);
   hframe__32->SetMarkerStyle(20);
   hframe__32->GetXaxis()->SetTitle("M_{W'} (TeV)");
   hframe__32->GetXaxis()->CenterTitle(true);
   hframe__32->GetXaxis()->SetNdivisions(508);
   hframe__32->GetXaxis()->SetLabelFont(42);
   hframe__32->GetXaxis()->SetLabelOffset(0.007);
   hframe__32->GetXaxis()->SetTitleSize(0.05);
   hframe__32->GetXaxis()->SetTitleOffset(1.05);
   hframe__32->GetXaxis()->SetTitleFont(42);
   hframe__32->GetYaxis()->SetTitle("#sigma_{95%} #times BR(W' #rightarrow WZ) [pb]");
   hframe__32->GetYaxis()->CenterTitle(true);
   hframe__32->GetYaxis()->SetLabelFont(42);
   hframe__32->GetYaxis()->SetLabelOffset(0.007);
   hframe__32->GetYaxis()->SetTitleSize(0.05);
   hframe__32->GetYaxis()->SetTitleOffset(1.15);
   hframe__32->GetYaxis()->SetTitleFont(42);
   hframe__32->GetZaxis()->SetLabelFont(42);
   hframe__32->GetZaxis()->SetLabelOffset(0.007);
   hframe__32->GetZaxis()->SetLabelSize(0.05);
   hframe__32->GetZaxis()->SetTitleSize(0.06);
   hframe__32->GetZaxis()->SetTitleFont(42);
   hframe__32->Draw("sameaxis");
   
   TH1F *hframe__33 = new TH1F("hframe__33","",1000,1.1,4.2);
   hframe__33->SetMinimum(0.0001);
   hframe__33->SetMaximum(9);
   hframe__33->SetDirectory(0);
   hframe__33->SetStats(0);
   hframe__33->SetLineStyle(0);
   hframe__33->SetMarkerStyle(20);
   hframe__33->GetXaxis()->SetTitle("M_{W'} (TeV)");
   hframe__33->GetXaxis()->CenterTitle(true);
   hframe__33->GetXaxis()->SetNdivisions(508);
   hframe__33->GetXaxis()->SetLabelFont(42);
   hframe__33->GetXaxis()->SetLabelOffset(0.007);
   hframe__33->GetXaxis()->SetTitleSize(0.05);
   hframe__33->GetXaxis()->SetTitleOffset(1.05);
   hframe__33->GetXaxis()->SetTitleFont(42);
   hframe__33->GetYaxis()->SetTitle("#sigma_{95%} #times BR(W' #rightarrow WZ) [pb]");
   hframe__33->GetYaxis()->CenterTitle(true);
   hframe__33->GetYaxis()->SetLabelFont(42);
   hframe__33->GetYaxis()->SetLabelOffset(0.007);
   hframe__33->GetYaxis()->SetTitleSize(0.05);
   hframe__33->GetYaxis()->SetTitleOffset(1.15);
   hframe__33->GetYaxis()->SetTitleFont(42);
   hframe__33->GetZaxis()->SetLabelFont(42);
   hframe__33->GetZaxis()->SetLabelOffset(0.007);
   hframe__33->GetZaxis()->SetLabelSize(0.05);
   hframe__33->GetZaxis()->SetTitleSize(0.06);
   hframe__33->GetZaxis()->SetTitleFont(42);
   hframe__33->Draw("sameaxig");
   
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
   entry=leg->AddEntry("Graph4","#sigma_{TH}#timesBR(W'#rightarrowWZ) HVT_{B}","L");

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
   entry=leg->AddEntry("Graph4"," ","");
   entry->SetLineColor(1);
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

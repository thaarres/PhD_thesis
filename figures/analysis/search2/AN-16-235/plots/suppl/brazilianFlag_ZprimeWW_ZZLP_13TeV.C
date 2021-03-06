{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Nov 15 12:55:51 2016) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "c1",50,72,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0.6571429,-3.704845,4.347619,2.168867);
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
   
   TH1F *hframe__16 = new TH1F("hframe__16","",1000,1.1,4.2);
   hframe__16->SetMinimum(0.001);
   hframe__16->SetMaximum(50);
   hframe__16->SetDirectory(0);
   hframe__16->SetStats(0);
   hframe__16->SetLineStyle(0);
   hframe__16->SetMarkerStyle(20);
   hframe__16->GetXaxis()->SetTitle("M_{Z'} (TeV)");
   hframe__16->GetXaxis()->CenterTitle(true);
   hframe__16->GetXaxis()->SetNdivisions(508);
   hframe__16->GetXaxis()->SetLabelFont(42);
   hframe__16->GetXaxis()->SetLabelOffset(0.007);
   hframe__16->GetXaxis()->SetTitleSize(0.05);
   hframe__16->GetXaxis()->SetTitleOffset(1.05);
   hframe__16->GetXaxis()->SetTitleFont(42);
   hframe__16->GetYaxis()->SetTitle("#sigma_{95%} #times BR(Z' #rightarrow WW) [pb]");
   hframe__16->GetYaxis()->CenterTitle(true);
   hframe__16->GetYaxis()->SetLabelFont(42);
   hframe__16->GetYaxis()->SetLabelOffset(0.007);
   hframe__16->GetYaxis()->SetTitleSize(0.05);
   hframe__16->GetYaxis()->SetTitleOffset(1.15);
   hframe__16->GetYaxis()->SetTitleFont(42);
   hframe__16->GetZaxis()->SetLabelFont(42);
   hframe__16->GetZaxis()->SetLabelOffset(0.007);
   hframe__16->GetZaxis()->SetLabelSize(0.05);
   hframe__16->GetZaxis()->SetTitleSize(0.06);
   hframe__16->GetZaxis()->SetTitleFont(42);
   hframe__16->Draw(" ");
   
   TGraph *graph = new TGraph(64);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1.1,1.275500488);
   graph->SetPoint(1,1.2,0.9419555664);
   graph->SetPoint(2,1.3,0.824597168);
   graph->SetPoint(3,1.4,0.7442993164);
   graph->SetPoint(4,1.5,0.5728942871);
   graph->SetPoint(5,1.6,0.4493591309);
   graph->SetPoint(6,1.7,0.4030334473);
   graph->SetPoint(7,1.8,0.4059753418);
   graph->SetPoint(8,1.9,0.3328308105);
   graph->SetPoint(9,2,0.2439239502);
   graph->SetPoint(10,2.1,0.1644561768);
   graph->SetPoint(11,2.2,0.1390274048);
   graph->SetPoint(12,2.3,0.1212020874);
   graph->SetPoint(13,2.4,0.1120834351);
   graph->SetPoint(14,2.5,0.1029647827);
   graph->SetPoint(15,2.6,0.08630828857);
   graph->SetPoint(16,2.7,0.07952423096);
   graph->SetPoint(17,2.8,0.07738494873);
   graph->SetPoint(18,2.9,0.07248916626);
   graph->SetPoint(19,3,0.06766891479);
   graph->SetPoint(20,3.1,0.06062393188);
   graph->SetPoint(21,3.2,0.05571212769);
   graph->SetPoint(22,3.3,0.05203475952);
   graph->SetPoint(23,3.4,0.04868545532);
   graph->SetPoint(24,3.5,0.04686203003);
   graph->SetPoint(25,3.6,0.04467391968);
   graph->SetPoint(26,3.7,0.0402671814);
   graph->SetPoint(27,3.8,0.04066238403);
   graph->SetPoint(28,3.9,0.03874740601);
   graph->SetPoint(29,4,0.03680076599);
   graph->SetPoint(30,4.1,0.03642997742);
   graph->SetPoint(31,4.2,0.0366153717);
   graph->SetPoint(32,4.2,0.2189858437);
   graph->SetPoint(33,4.1,0.214387188);
   graph->SetPoint(34,4,0.216569252);
   graph->SetPoint(35,3.9,0.2299979401);
   graph->SetPoint(36,3.8,0.2454044914);
   graph->SetPoint(37,3.7,0.2391804314);
   graph->SetPoint(38,3.6,0.2696148109);
   graph->SetPoint(39,3.5,0.2803944397);
   graph->SetPoint(40,3.4,0.2890571785);
   graph->SetPoint(41,3.3,0.3039967346);
   graph->SetPoint(42,3.2,0.3225024414);
   graph->SetPoint(43,3.1,0.3419532394);
   graph->SetPoint(44,3,0.3816909409);
   graph->SetPoint(45,2.9,0.4021449661);
   graph->SetPoint(46,2.8,0.4214493942);
   graph->SetPoint(47,2.7,0.4259178162);
   graph->SetPoint(48,2.6,0.4552878952);
   graph->SetPoint(49,2.5,0.5364037704);
   graph->SetPoint(50,2.4,0.5777000427);
   graph->SetPoint(51,2.3,0.6175127792);
   graph->SetPoint(52,2.2,0.6961693573);
   graph->SetPoint(53,2.1,0.8169921875);
   graph->SetPoint(54,2,1.22964859);
   graph->SetPoint(55,1.9,1.662024689);
   graph->SetPoint(56,1.8,2.011125793);
   graph->SetPoint(57,1.7,1.959128876);
   graph->SetPoint(58,1.6,2.182758636);
   graph->SetPoint(59,1.5,2.780844116);
   graph->SetPoint(60,1.4,3.577669067);
   graph->SetPoint(61,1.3,3.963641663);
   graph->SetPoint(62,1.2,4.527755432);
   graph->SetPoint(63,1.1,6.121862183);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,0.79,4.51);
   Graph_Graph11->SetMinimum(0.03278698);
   Graph_Graph11->SetMaximum(6.730405);
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
   
   graph = new TGraph(64);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1.1,1.749854736);
   graph->SetPoint(1,1.2,1.292265625);
   graph->SetPoint(2,1.3,1.131262054);
   graph->SetPoint(3,1.4,1.021101685);
   graph->SetPoint(4,1.5,0.785951767);
   graph->SetPoint(5,1.6,0.6164742661);
   graph->SetPoint(6,1.7,0.5529202271);
   graph->SetPoint(7,1.8,0.5593344116);
   graph->SetPoint(8,1.9,0.4605402374);
   graph->SetPoint(9,2,0.3375191879);
   graph->SetPoint(10,2.1,0.2256168747);
   graph->SetPoint(11,2.2,0.191545639);
   graph->SetPoint(12,2.3,0.1667080116);
   graph->SetPoint(13,2.4,0.1541657162);
   graph->SetPoint(14,2.5,0.1416234207);
   graph->SetPoint(15,2.6,0.1185005474);
   graph->SetPoint(16,2.7,0.1098526573);
   graph->SetPoint(17,2.8,0.1067041206);
   graph->SetPoint(18,2.9,0.1003869152);
   graph->SetPoint(19,3,0.09371156693);
   graph->SetPoint(20,3.1,0.08395529747);
   graph->SetPoint(21,3.2,0.07724711895);
   graph->SetPoint(22,3.3,0.07191973686);
   graph->SetPoint(23,3.4,0.06758464813);
   graph->SetPoint(24,3.5,0.06505338669);
   graph->SetPoint(25,3.6,0.06181654453);
   graph->SetPoint(26,3.7,0.05565520287);
   graph->SetPoint(27,3.8,0.0560842371);
   graph->SetPoint(28,3.9,0.05332439899);
   graph->SetPoint(29,4,0.05064542294);
   graph->SetPoint(30,4.1,0.04997760773);
   graph->SetPoint(31,4.2,0.05007361412);
   graph->SetPoint(32,4.2,0.1294263268);
   graph->SetPoint(33,4.1,0.1275471592);
   graph->SetPoint(34,4,0.1288453484);
   graph->SetPoint(35,3.9,0.1369625378);
   graph->SetPoint(36,3.8,0.1461370659);
   graph->SetPoint(37,3.7,0.1435157681);
   graph->SetPoint(38,3.6,0.1605541801);
   graph->SetPoint(39,3.5,0.1668173981);
   graph->SetPoint(40,3.4,0.1733083534);
   graph->SetPoint(41,3.3,0.1836938667);
   graph->SetPoint(42,3.2,0.1947886276);
   graph->SetPoint(43,3.1,0.208180809);
   graph->SetPoint(44,3,0.232373085);
   graph->SetPoint(45,2.9,0.2489256859);
   graph->SetPoint(46,2.8,0.2609898949);
   graph->SetPoint(47,2.7,0.2660331917);
   graph->SetPoint(48,2.6,0.2858754539);
   graph->SetPoint(49,2.5,0.3383067322);
   graph->SetPoint(50,2.4,0.3655115128);
   graph->SetPoint(51,2.3,0.3912744522);
   graph->SetPoint(52,2.2,0.4452433395);
   graph->SetPoint(53,2.1,0.5225170135);
   graph->SetPoint(54,2,0.7834567261);
   graph->SetPoint(55,1.9,1.069015656);
   graph->SetPoint(56,1.8,1.293557739);
   graph->SetPoint(57,1.7,1.267530136);
   graph->SetPoint(58,1.6,1.409598389);
   graph->SetPoint(59,1.5,1.792495575);
   graph->SetPoint(60,1.4,2.328794861);
   graph->SetPoint(61,1.3,2.58003418);
   graph->SetPoint(62,1.2,2.947229919);
   graph->SetPoint(63,1.1,3.97026123);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,0.79,4.51);
   Graph_Graph12->SetMinimum(0.04497985);
   Graph_Graph12->SetMaximum(4.36229);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);
   Graph_Graph12->SetLineStyle(0);
   Graph_Graph12->SetMarkerStyle(20);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   graph->Draw("f");
   
   TGraphErrors *gre = new TGraphErrors(32);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1.1,2.58125);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.2,1.90625);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.3,1.66875);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.4,1.50625);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.5,1.159375);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,1.6,0.909375);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,1.7,0.815625);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,1.8,0.828125);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,1.9,0.684375);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2,0.5015625);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,2.1,0.3328125);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,2.2,0.2835938);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,2.3,0.2492188);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,2.4,0.2304688);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,2.5,0.2117188);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,2.6,0.1789063);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,2.7,0.1648438);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,2.8,0.1617187);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,2.9,0.1527344);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,3,0.1425781);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,3.1,0.1277344);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,3.2,0.1183594);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,3.3,0.1105469);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,3.4,0.1042969);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,3.5,0.1003906);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,3.6,0.09570312);
   gre->SetPointError(25,0,0);
   gre->SetPoint(26,3.7,0.08554688);
   gre->SetPointError(26,0,0);
   gre->SetPoint(27,3.8,0.08710938);
   gre->SetPointError(27,0,0);
   gre->SetPoint(28,3.9,0.08164063);
   gre->SetPointError(28,0,0);
   gre->SetPoint(29,4,0.07753906);
   gre->SetPointError(29,0,0);
   gre->SetPoint(30,4.1,0.07675781);
   gre->SetPointError(30,0,0);
   gre->SetPoint(31,4.2,0.07714844);
   gre->SetPointError(31,0,0);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","Graph",100,0.79,4.51);
   Graph_Graph16->SetMinimum(0.06908203);
   Graph_Graph16->SetMaximum(2.831699);
   Graph_Graph16->SetDirectory(0);
   Graph_Graph16->SetStats(0);
   Graph_Graph16->SetLineStyle(0);
   Graph_Graph16->SetMarkerStyle(20);
   Graph_Graph16->GetXaxis()->SetLabelFont(42);
   Graph_Graph16->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph16->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph16->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph16->GetXaxis()->SetTitleFont(42);
   Graph_Graph16->GetYaxis()->SetLabelFont(42);
   Graph_Graph16->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph16->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph16->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph16->GetYaxis()->SetTitleFont(42);
   Graph_Graph16->GetZaxis()->SetLabelFont(42);
   Graph_Graph16->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph16->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph16->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph16);
   
   gre->Draw("l");
   
   gre = new TGraphErrors(32);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(0.8);
   gre->SetPoint(0,1.1,7.599826);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.2,1.415808);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.3,0.7410399);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.4,1.400088);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.5,1.570166);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,1.6,1.150011);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,1.7,0.9818398);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,1.8,1.548141);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,1.9,1.396765);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2,0.9033713);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,2.1,0.2008918);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,2.2,0.248922);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,2.3,0.2789157);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,2.4,0.2731695);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,2.5,0.2512576);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,2.6,0.2209428);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,2.7,0.2039279);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,2.8,0.1604204);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,2.9,0.100423);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,3,0.07412681);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,3.1,0.06458955);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,3.2,0.06307528);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,3.3,0.0617824);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,3.4,0.06079027);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,3.5,0.06269086);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,3.6,0.0903732);
   gre->SetPointError(25,0,0);
   gre->SetPoint(26,3.7,0.09070325);
   gre->SetPointError(26,0,0);
   gre->SetPoint(27,3.8,0.09519014);
   gre->SetPointError(27,0,0);
   gre->SetPoint(28,3.9,0.08885131);
   gre->SetPointError(28,0,0);
   gre->SetPoint(29,4,0.08195895);
   gre->SetPointError(29,0,0);
   gre->SetPoint(30,4.1,0.07846344);
   gre->SetPointError(30,0,0);
   gre->SetPoint(31,4.2,0.06084621);
   gre->SetPointError(31,0,0);
   
   TH1F *Graph_Graph17 = new TH1F("Graph_Graph17","Graph",100,0.79,4.51);
   Graph_Graph17->SetMinimum(0.05471124);
   Graph_Graph17->SetMaximum(8.353729);
   Graph_Graph17->SetDirectory(0);
   Graph_Graph17->SetStats(0);
   Graph_Graph17->SetLineStyle(0);
   Graph_Graph17->SetMarkerStyle(20);
   Graph_Graph17->GetXaxis()->SetLabelFont(42);
   Graph_Graph17->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph17->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph17->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph17->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph17->GetXaxis()->SetTitleFont(42);
   Graph_Graph17->GetYaxis()->SetLabelFont(42);
   Graph_Graph17->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph17->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph17->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph17->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph17->GetYaxis()->SetTitleFont(42);
   Graph_Graph17->GetZaxis()->SetLabelFont(42);
   Graph_Graph17->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph17->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph17->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph17->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph17);
   
   gre->Draw("lp");
   
   gre = new TGraphErrors(32);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1,0.2297105);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.1,0.1698431);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.2,0.1249109);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.3,0.09213477);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.4,0.06836332);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,1.5,0.05107489);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,1.6,0.03843727);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,1.7,0.02912853);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,1.8,0.02221072);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,1.9,0.01704045);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,2,0.01314597);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,2.1,0.01019235);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,2.2,0.007938773);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,2.3,0.006209268);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,2.4,0.004874973);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,2.5,0.003840101);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,2.6,0.003034421);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,2.7,0.002404569);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,2.8,0.001910345);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,2.9,0.001523191);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,3,0.001213251);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,3.1,0.0009696877);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,3.2,0.0007763179);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,3.3,0.0006224063);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,3.4,0.0004996417);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,3.5,0.0004015317);
   gre->SetPointError(25,0,0);
   gre->SetPoint(26,3.6,0.0003229796);
   gre->SetPointError(26,0,0);
   gre->SetPoint(27,3.7,0.0002599931);
   gre->SetPointError(27,0,0);
   gre->SetPoint(28,3.8,0.0002094243);
   gre->SetPointError(28,0,0);
   gre->SetPoint(29,3.9,0.0001687957);
   gre->SetPointError(29,0,0);
   gre->SetPoint(30,4,0.0001360964);
   gre->SetPointError(30,0,0);
   gre->SetPoint(31,4.5,4.40964e-05);
   gre->SetPointError(31,0,0);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","Graph",100,0.65,4.85);
   Graph_Graph18->SetMinimum(3.968676e-05);
   Graph_Graph18->SetMaximum(0.2526771);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);
   Graph_Graph18->SetLineStyle(0);
   Graph_Graph18->SetMarkerStyle(20);
   Graph_Graph18->GetXaxis()->SetLabelFont(42);
   Graph_Graph18->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph18->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph18->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph18->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph18->GetXaxis()->SetTitleFont(42);
   Graph_Graph18->GetYaxis()->SetLabelFont(42);
   Graph_Graph18->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph18->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph18->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph18->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph18->GetYaxis()->SetTitleFont(42);
   Graph_Graph18->GetZaxis()->SetLabelFont(42);
   Graph_Graph18->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph18->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph18->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph18->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph18);
   
   gre->Draw("l");
   
   TPaveText *pt = new TPaveText(0.6946309,0.5437063,0.795302,0.6363636,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   TText *text = pt->AddText("ZZ enriched");
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
   
   TH1F *hframe__17 = new TH1F("hframe__17","",1000,1.1,4.2);
   hframe__17->SetMinimum(0.001);
   hframe__17->SetMaximum(50);
   hframe__17->SetDirectory(0);
   hframe__17->SetStats(0);
   hframe__17->SetLineStyle(0);
   hframe__17->SetMarkerStyle(20);
   hframe__17->GetXaxis()->SetTitle("M_{Z'} (TeV)");
   hframe__17->GetXaxis()->CenterTitle(true);
   hframe__17->GetXaxis()->SetNdivisions(508);
   hframe__17->GetXaxis()->SetLabelFont(42);
   hframe__17->GetXaxis()->SetLabelOffset(0.007);
   hframe__17->GetXaxis()->SetTitleSize(0.05);
   hframe__17->GetXaxis()->SetTitleOffset(1.05);
   hframe__17->GetXaxis()->SetTitleFont(42);
   hframe__17->GetYaxis()->SetTitle("#sigma_{95%} #times BR(Z' #rightarrow WW) [pb]");
   hframe__17->GetYaxis()->CenterTitle(true);
   hframe__17->GetYaxis()->SetLabelFont(42);
   hframe__17->GetYaxis()->SetLabelOffset(0.007);
   hframe__17->GetYaxis()->SetTitleSize(0.05);
   hframe__17->GetYaxis()->SetTitleOffset(1.15);
   hframe__17->GetYaxis()->SetTitleFont(42);
   hframe__17->GetZaxis()->SetLabelFont(42);
   hframe__17->GetZaxis()->SetLabelOffset(0.007);
   hframe__17->GetZaxis()->SetLabelSize(0.05);
   hframe__17->GetZaxis()->SetTitleSize(0.06);
   hframe__17->GetZaxis()->SetTitleFont(42);
   hframe__17->Draw("sameaxis");
   
   TH1F *hframe__18 = new TH1F("hframe__18","",1000,1.1,4.2);
   hframe__18->SetMinimum(0.001);
   hframe__18->SetMaximum(50);
   hframe__18->SetDirectory(0);
   hframe__18->SetStats(0);
   hframe__18->SetLineStyle(0);
   hframe__18->SetMarkerStyle(20);
   hframe__18->GetXaxis()->SetTitle("M_{Z'} (TeV)");
   hframe__18->GetXaxis()->CenterTitle(true);
   hframe__18->GetXaxis()->SetNdivisions(508);
   hframe__18->GetXaxis()->SetLabelFont(42);
   hframe__18->GetXaxis()->SetLabelOffset(0.007);
   hframe__18->GetXaxis()->SetTitleSize(0.05);
   hframe__18->GetXaxis()->SetTitleOffset(1.05);
   hframe__18->GetXaxis()->SetTitleFont(42);
   hframe__18->GetYaxis()->SetTitle("#sigma_{95%} #times BR(Z' #rightarrow WW) [pb]");
   hframe__18->GetYaxis()->CenterTitle(true);
   hframe__18->GetYaxis()->SetLabelFont(42);
   hframe__18->GetYaxis()->SetLabelOffset(0.007);
   hframe__18->GetYaxis()->SetTitleSize(0.05);
   hframe__18->GetYaxis()->SetTitleOffset(1.15);
   hframe__18->GetYaxis()->SetTitleFont(42);
   hframe__18->GetZaxis()->SetLabelFont(42);
   hframe__18->GetZaxis()->SetLabelOffset(0.007);
   hframe__18->GetZaxis()->SetLabelSize(0.05);
   hframe__18->GetZaxis()->SetTitleSize(0.06);
   hframe__18->GetZaxis()->SetTitleFont(42);
   hframe__18->Draw("sameaxig");
   
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
   entry=leg->AddEntry("Graph4","#sigma_{TH}#timesBR(Z'#rightarrowWW) HVT_{B}","L");

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

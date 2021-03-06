{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Nov 15 13:03:25 2016) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "c1",50,72,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0.6857143,-3.704845,4.138095,2.168867);
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
   
   TH1F *hframe__7 = new TH1F("hframe__7","",1000,1.1,4);
   hframe__7->SetMinimum(0.001);
   hframe__7->SetMaximum(50);
   hframe__7->SetDirectory(0);
   hframe__7->SetStats(0);
   hframe__7->SetLineStyle(0);
   hframe__7->SetMarkerStyle(20);
   hframe__7->GetXaxis()->SetTitle("M_{G_{Bulk}} (TeV)");
   hframe__7->GetXaxis()->CenterTitle(true);
   hframe__7->GetXaxis()->SetNdivisions(508);
   hframe__7->GetXaxis()->SetLabelFont(42);
   hframe__7->GetXaxis()->SetLabelOffset(0.007);
   hframe__7->GetXaxis()->SetTitleSize(0.05);
   hframe__7->GetXaxis()->SetTitleOffset(1.05);
   hframe__7->GetXaxis()->SetTitleFont(42);
   hframe__7->GetYaxis()->SetTitle("#sigma_{95%} #times BR(G_{Bulk} #rightarrow ZZ) [pb]");
   hframe__7->GetYaxis()->CenterTitle(true);
   hframe__7->GetYaxis()->SetLabelFont(42);
   hframe__7->GetYaxis()->SetLabelOffset(0.007);
   hframe__7->GetYaxis()->SetTitleSize(0.05);
   hframe__7->GetYaxis()->SetTitleOffset(1.15);
   hframe__7->GetYaxis()->SetTitleFont(42);
   hframe__7->GetZaxis()->SetLabelFont(42);
   hframe__7->GetZaxis()->SetLabelOffset(0.007);
   hframe__7->GetZaxis()->SetLabelSize(0.05);
   hframe__7->GetZaxis()->SetTitleSize(0.06);
   hframe__7->GetZaxis()->SetTitleFont(42);
   hframe__7->Draw(" ");
   
   TGraph *graph = new TGraph(60);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1.1,0.2162300826);
   graph->SetPoint(1,1.2,0.158469992);
   graph->SetPoint(2,1.3,0.1164724099);
   graph->SetPoint(3,1.4,0.08583230239);
   graph->SetPoint(4,1.5,0.06393884555);
   graph->SetPoint(5,1.6,0.04888709397);
   graph->SetPoint(6,1.7,0.03918431196);
   graph->SetPoint(7,1.8,0.03272164449);
   graph->SetPoint(8,1.9,0.02720535193);
   graph->SetPoint(9,2,0.0227547068);
   graph->SetPoint(10,2.1,0.01969679382);
   graph->SetPoint(11,2.2,0.01674083568);
   graph->SetPoint(12,2.3,0.01470564178);
   graph->SetPoint(13,2.4,0.01292313975);
   graph->SetPoint(14,2.5,0.01136345047);
   graph->SetPoint(15,2.6,0.0102175563);
   graph->SetPoint(16,2.7,0.009333622618);
   graph->SetPoint(17,2.8,0.008820433746);
   graph->SetPoint(18,2.9,0.008371393482);
   graph->SetPoint(19,3,0.007986501828);
   graph->SetPoint(20,3.1,0.007601610173);
   graph->SetPoint(21,3.2,0.007280867128);
   graph->SetPoint(22,3.3,0.006986588433);
   graph->SetPoint(23,3.4,0.006767678256);
   graph->SetPoint(24,3.5,0.006560597765);
   graph->SetPoint(25,3.6,0.006269733825);
   graph->SetPoint(26,3.7,0.006027347208);
   graph->SetPoint(27,3.8,0.005975150241);
   graph->SetPoint(28,3.9,0.005930392561);
   graph->SetPoint(29,4,0.005930392561);
   graph->SetPoint(30,4,0.03006286026);
   graph->SetPoint(31,3.9,0.02980452917);
   graph->SetPoint(32,3.8,0.02980452917);
   graph->SetPoint(33,3.7,0.03002923956);
   graph->SetPoint(34,3.6,0.03123685054);
   graph->SetPoint(35,3.5,0.03268598225);
   graph->SetPoint(36,3.4,0.03397410095);
   graph->SetPoint(37,3.3,0.03458026384);
   graph->SetPoint(38,3.2,0.03617382505);
   graph->SetPoint(39,3.1,0.03738949486);
   graph->SetPoint(40,3,0.03888173541);
   graph->SetPoint(41,2.9,0.04075555531);
   graph->SetPoint(42,2.8,0.04249463873);
   graph->SetPoint(43,2.7,0.04502250858);
   graph->SetPoint(44,2.6,0.04913969314);
   graph->SetPoint(45,2.5,0.05465068795);
   graph->SetPoint(46,2.4,0.06215176286);
   graph->SetPoint(47,2.3,0.07005784721);
   graph->SetPoint(48,2.2,0.07949134165);
   graph->SetPoint(49,2.1,0.09375587028);
   graph->SetPoint(50,2,0.1088104903);
   graph->SetPoint(51,1.9,0.1300001564);
   graph->SetPoint(52,1.8,0.1563596345);
   graph->SetPoint(53,1.7,0.1865930739);
   graph->SetPoint(54,1.6,0.2331455293);
   graph->SetPoint(55,1.5,0.3049282424);
   graph->SetPoint(56,1.4,0.4133645438);
   graph->SetPoint(57,1.3,0.5631343258);
   graph->SetPoint(58,1.2,0.7605889154);
   graph->SetPoint(59,1.1,1.03936638);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0.81,4.29);
   Graph_Graph5->SetMinimum(0.005337353);
   Graph_Graph5->SetMaximum(1.14271);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);
   Graph_Graph5->SetLineStyle(0);
   Graph_Graph5->SetMarkerStyle(20);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   graph->Draw("f");
   
   graph = new TGraph(60);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1.1,0.2966453154);
   graph->SetPoint(1,1.2,0.217404446);
   graph->SetPoint(2,1.3,0.1594509828);
   graph->SetPoint(3,1.4,0.1172581255);
   graph->SetPoint(4,1.5,0.08734880477);
   graph->SetPoint(5,1.6,0.06697861154);
   graph->SetPoint(6,1.7,0.05353088251);
   graph->SetPoint(7,1.8,0.04451629556);
   graph->SetPoint(8,1.9,0.03701163516);
   graph->SetPoint(9,2,0.03095673576);
   graph->SetPoint(10,2.1,0.02658983749);
   graph->SetPoint(11,2.2,0.02268157982);
   graph->SetPoint(12,2.3,0.01978799705);
   graph->SetPoint(13,2.4,0.01743799934);
   graph->SetPoint(14,2.5,0.01524803778);
   graph->SetPoint(15,2.6,0.01371042002);
   graph->SetPoint(16,2.7,0.01247482024);
   graph->SetPoint(17,2.8,0.01172367784);
   graph->SetPoint(18,2.9,0.01112683601);
   graph->SetPoint(19,3,0.01061525817);
   graph->SetPoint(20,3.1,0.01010367911);
   graph->SetPoint(21,3.2,0.009677363428);
   graph->SetPoint(22,3.3,0.009268311773);
   graph->SetPoint(23,3.4,0.008995258218);
   graph->SetPoint(24,3.5,0.00866261963);
   graph->SetPoint(25,3.6,0.008255735125);
   graph->SetPoint(26,3.7,0.007936569575);
   graph->SetPoint(27,3.8,0.007838450863);
   graph->SetPoint(28,3.9,0.007808904087);
   graph->SetPoint(29,4,0.007808904087);
   graph->SetPoint(30,4,0.01830875695);
   graph->SetPoint(31,3.9,0.01830875695);
   graph->SetPoint(32,3.8,0.01830875695);
   graph->SetPoint(33,3.7,0.01860808339);
   graph->SetPoint(34,3.6,0.01935639765);
   graph->SetPoint(35,3.5,0.02025437451);
   graph->SetPoint(36,3.4,0.0210525759);
   graph->SetPoint(37,3.3,0.02148919865);
   graph->SetPoint(38,3.2,0.02247948487);
   graph->SetPoint(39,3.1,0.02335179376);
   graph->SetPoint(40,3,0.0244102141);
   graph->SetPoint(41,2.9,0.02558661178);
   graph->SetPoint(42,2.8,0.02682218229);
   graph->SetPoint(43,2.7,0.02852760111);
   graph->SetPoint(44,2.6,0.03130879942);
   graph->SetPoint(45,2.5,0.03482006744);
   graph->SetPoint(46,2.4,0.03959929248);
   graph->SetPoint(47,2.3,0.04506126605);
   graph->SetPoint(48,2.2,0.05142983263);
   graph->SetPoint(49,2.1,0.06043380945);
   graph->SetPoint(50,2,0.07026846929);
   graph->SetPoint(51,1.9,0.08379639627);
   graph->SetPoint(52,1.8,0.1007873774);
   graph->SetPoint(53,1.7,0.1210127265);
   graph->SetPoint(54,1.6,0.1517603012);
   graph->SetPoint(55,1.5,0.1984854748);
   graph->SetPoint(56,1.4,0.2664493797);
   graph->SetPoint(57,1.3,0.3629890265);
   graph->SetPoint(58,1.2,0.4932709001);
   graph->SetPoint(59,1.1,0.6765497301);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0.81,4.29);
   Graph_Graph6->SetMinimum(0.007028014);
   Graph_Graph6->SetMaximum(0.7434238);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);
   Graph_Graph6->SetLineStyle(0);
   Graph_Graph6->SetMarkerStyle(20);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   graph->Draw("f");
   
   TGraphErrors *gre = new TGraphErrors(30);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1.1,0.4375882);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.2,0.3206982);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.3,0.234779);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.4,0.1723378);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.5,0.1283792);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,1.6,0.09815762);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,1.7,0.07867595);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,1.8,0.06518865);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,1.9,0.05419899);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2,0.04533233);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,2.1,0.03908821);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,2.2,0.03309385);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,2.3,0.02884785);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,2.4,0.02535114);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,2.5,0.02229152);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,2.6,0.02004364);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,2.7,0.0181704);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,2.8,0.01717134);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,2.9,0.01629716);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,3,0.01554787);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,3.1,0.01479857);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,3.2,0.01417416);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,3.3,0.01354975);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,3.4,0.0131751);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,3.5,0.01267557);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,3.6,0.0121136);
   gre->SetPointError(25,0,0);
   gre->SetPoint(26,3.7,0.01164529);
   gre->SetPointError(26,0,0);
   gre->SetPoint(27,3.8,0.01145797);
   gre->SetPointError(27,0,0);
   gre->SetPoint(28,3.9,0.01145797);
   gre->SetPointError(28,0,0);
   gre->SetPoint(29,4,0.01145797);
   gre->SetPointError(29,0,0);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,0.81,4.29);
   Graph_Graph7->SetMinimum(0.01031217);
   Graph_Graph7->SetMaximum(0.4802012);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);
   Graph_Graph7->SetLineStyle(0);
   Graph_Graph7->SetMarkerStyle(20);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph7);
   
   gre->Draw("l");
   
   gre = new TGraphErrors(30);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(0.8);
   gre->SetPoint(0,1.1,1.38163);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,1.2,0.2072058);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,1.3,0.1221114);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.4,0.09796692);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.5,0.1644054);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,1.6,0.1333205);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,1.7,0.06764437);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,1.8,0.1033813);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,1.9,0.1054167);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2,0.08455282);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,2.1,0.03344863);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,2.2,0.02244075);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,2.3,0.0282956);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,2.4,0.02835189);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,2.5,0.0246629);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,2.6,0.02277194);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,2.7,0.0210272);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,2.8,0.01785151);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,2.9,0.01160473);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,3,0.007633071);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,3.1,0.00659247);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,3.2,0.006403225);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,3.3,0.006316764);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,3.4,0.006359824);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,3.5,0.006506316);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,3.6,0.008486086);
   gre->SetPointError(25,0,0);
   gre->SetPoint(26,3.7,0.01024392);
   gre->SetPointError(26,0,0);
   gre->SetPoint(27,3.8,0.01057093);
   gre->SetPointError(27,0,0);
   gre->SetPoint(28,3.9,0.01071462);
   gre->SetPointError(28,0,0);
   gre->SetPoint(29,4,0.01077144);
   gre->SetPointError(29,0,0);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,0.81,4.29);
   Graph_Graph8->SetMinimum(0.005685088);
   Graph_Graph8->SetMaximum(1.519162);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);
   Graph_Graph8->SetLineStyle(0);
   Graph_Graph8->SetMarkerStyle(20);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph8);
   
   gre->Draw("lp");
   
   gre = new TGraphErrors(11);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(20);
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
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,0.65,4.85);
   Graph_Graph9->SetMinimum(9.403527e-07);
   Graph_Graph9->SetMaximum(0.01127473);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);
   Graph_Graph9->SetLineStyle(0);
   Graph_Graph9->SetMarkerStyle(20);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph9->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph9->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph9);
   
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
   
   TH1F *hframe__8 = new TH1F("hframe__8","",1000,1.1,4);
   hframe__8->SetMinimum(0.001);
   hframe__8->SetMaximum(50);
   hframe__8->SetDirectory(0);
   hframe__8->SetStats(0);
   hframe__8->SetLineStyle(0);
   hframe__8->SetMarkerStyle(20);
   hframe__8->GetXaxis()->SetTitle("M_{G_{Bulk}} (TeV)");
   hframe__8->GetXaxis()->CenterTitle(true);
   hframe__8->GetXaxis()->SetNdivisions(508);
   hframe__8->GetXaxis()->SetLabelFont(42);
   hframe__8->GetXaxis()->SetLabelOffset(0.007);
   hframe__8->GetXaxis()->SetTitleSize(0.05);
   hframe__8->GetXaxis()->SetTitleOffset(1.05);
   hframe__8->GetXaxis()->SetTitleFont(42);
   hframe__8->GetYaxis()->SetTitle("#sigma_{95%} #times BR(G_{Bulk} #rightarrow ZZ) [pb]");
   hframe__8->GetYaxis()->CenterTitle(true);
   hframe__8->GetYaxis()->SetLabelFont(42);
   hframe__8->GetYaxis()->SetLabelOffset(0.007);
   hframe__8->GetYaxis()->SetTitleSize(0.05);
   hframe__8->GetYaxis()->SetTitleOffset(1.15);
   hframe__8->GetYaxis()->SetTitleFont(42);
   hframe__8->GetZaxis()->SetLabelFont(42);
   hframe__8->GetZaxis()->SetLabelOffset(0.007);
   hframe__8->GetZaxis()->SetLabelSize(0.05);
   hframe__8->GetZaxis()->SetTitleSize(0.06);
   hframe__8->GetZaxis()->SetTitleFont(42);
   hframe__8->Draw("sameaxis");
   
   TH1F *hframe__9 = new TH1F("hframe__9","",1000,1.1,4);
   hframe__9->SetMinimum(0.001);
   hframe__9->SetMaximum(50);
   hframe__9->SetDirectory(0);
   hframe__9->SetStats(0);
   hframe__9->SetLineStyle(0);
   hframe__9->SetMarkerStyle(20);
   hframe__9->GetXaxis()->SetTitle("M_{G_{Bulk}} (TeV)");
   hframe__9->GetXaxis()->CenterTitle(true);
   hframe__9->GetXaxis()->SetNdivisions(508);
   hframe__9->GetXaxis()->SetLabelFont(42);
   hframe__9->GetXaxis()->SetLabelOffset(0.007);
   hframe__9->GetXaxis()->SetTitleSize(0.05);
   hframe__9->GetXaxis()->SetTitleOffset(1.05);
   hframe__9->GetXaxis()->SetTitleFont(42);
   hframe__9->GetYaxis()->SetTitle("#sigma_{95%} #times BR(G_{Bulk} #rightarrow ZZ) [pb]");
   hframe__9->GetYaxis()->CenterTitle(true);
   hframe__9->GetYaxis()->SetLabelFont(42);
   hframe__9->GetYaxis()->SetLabelOffset(0.007);
   hframe__9->GetYaxis()->SetTitleSize(0.05);
   hframe__9->GetYaxis()->SetTitleOffset(1.15);
   hframe__9->GetYaxis()->SetTitleFont(42);
   hframe__9->GetZaxis()->SetLabelFont(42);
   hframe__9->GetZaxis()->SetLabelOffset(0.007);
   hframe__9->GetZaxis()->SetLabelSize(0.05);
   hframe__9->GetZaxis()->SetTitleSize(0.06);
   hframe__9->GetZaxis()->SetTitleFont(42);
   hframe__9->Draw("sameaxig");
   
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
   entry=leg->AddEntry("Graph4","#sigma_{TH}#timesBR(G_{Bulk}#rightarrowZZ) #tilde{k}=0.5","L");

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

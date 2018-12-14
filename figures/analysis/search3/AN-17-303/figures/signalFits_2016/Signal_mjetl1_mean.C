void Signal_mjetl1_mean()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 16:08:56 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(445.6571,62.57732,5728.514,114.1237);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.144);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1001[12] = {
   78.80275,
   79.83697,
   79.4736,
   79.00428,
   79.74852,
   80.59213,
   80.47748,
   80.60422,
   80.19037,
   80.33487,
   79.15524,
   79.19809};
   Double_t _fex1001[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1001[12] = {
   0.3141925,
   0.2596278,
   0.2399551,
   0.2302209,
   0.2202367,
   0.2528952,
   0.2167597,
   0.2082684,
   0.2084001,
   0.2087831,
   0.2171829,
   0.2105065};
   TGraphErrors *gre = new TGraphErrors(12,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,770,5930);
   Graph_Graph1001->SetMinimum(70);
   Graph_Graph1001->SetMaximum(110);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph1001->GetXaxis()->SetRange(7,92);
   Graph_Graph1001->GetXaxis()->SetNdivisions(209);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("mean (GeV)");
   Graph_Graph1001->GetYaxis()->SetNdivisions(504);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *pol41002 = new TF1("pol4","pol4",1200,5500);
   pol41002->SetFillColor(19);
   pol41002->SetFillStyle(0);
   pol41002->SetLineColor(2);
   pol41002->SetLineWidth(2);
   pol41002->SetChisquare(20.80062);
   pol41002->SetNDF(7);
   pol41002->GetXaxis()->SetLabelFont(42);
   pol41002->GetXaxis()->SetLabelOffset(0.007);
   pol41002->GetXaxis()->SetLabelSize(0.05);
   pol41002->GetXaxis()->SetTitleSize(0.06);
   pol41002->GetXaxis()->SetTitleOffset(0.9);
   pol41002->GetXaxis()->SetTitleFont(42);
   pol41002->GetYaxis()->SetLabelFont(42);
   pol41002->GetYaxis()->SetLabelOffset(0.007);
   pol41002->GetYaxis()->SetLabelSize(0.05);
   pol41002->GetYaxis()->SetTitleSize(0.06);
   pol41002->GetYaxis()->SetTitleOffset(1.25);
   pol41002->GetYaxis()->SetTitleFont(42);
   pol41002->SetParameter(0,82.09884);
   pol41002->SetParError(0,2.88601);
   pol41002->SetParLimits(0,0,0);
   pol41002->SetParameter(1,-0.00583967);
   pol41002->SetParError(1,0.004178112);
   pol41002->SetParLimits(1,0,0);
   pol41002->SetParameter(2,3.819688e-06);
   pol41002->SetParError(2,2.098916e-06);
   pol41002->SetParLimits(2,0,0);
   pol41002->SetParameter(3,-8.760065e-10);
   pol41002->SetParError(3,4.381143e-10);
   pol41002->SetParLimits(3,0,0);
   pol41002->SetParameter(4,6.486623e-14);
   pol41002->SetParError(4,3.236115e-14);
   pol41002->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41002);
   gre->Draw("ap");
   
   Double_t _fx1003[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1003[12] = {
   79.65266,
   79.31257,
   79.43648,
   78.94885,
   78.71901,
   79.11182,
   79.10165,
   79.63297,
   78.81581,
   78.78953,
   78.70434,
   78.18888};
   Double_t _fex1003[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1003[12] = {
   0.1668323,
   0.1480476,
   0.1426744,
   0.1495954,
   0.1507515,
   0.1521522,
   0.1529333,
   0.1570904,
   0.151597,
   0.1698082,
   0.1807138,
   0.1885694};
   gre = new TGraphErrors(12,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,770,5930);
   Graph_Graph1003->SetMinimum(77.8184);
   Graph_Graph1003->SetMaximum(80.00141);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   
   TF1 *pol41004 = new TF1("pol4","pol4",1200,5500);
   pol41004->SetFillColor(19);
   pol41004->SetFillStyle(0);
   pol41004->SetLineColor(2);
   pol41004->SetLineWidth(2);
   pol41004->SetChisquare(19.93655);
   pol41004->SetNDF(7);
   pol41004->GetXaxis()->SetLabelFont(42);
   pol41004->GetXaxis()->SetLabelOffset(0.007);
   pol41004->GetXaxis()->SetLabelSize(0.05);
   pol41004->GetXaxis()->SetTitleSize(0.06);
   pol41004->GetXaxis()->SetTitleOffset(0.9);
   pol41004->GetXaxis()->SetTitleFont(42);
   pol41004->GetYaxis()->SetLabelFont(42);
   pol41004->GetYaxis()->SetLabelOffset(0.007);
   pol41004->GetYaxis()->SetLabelSize(0.05);
   pol41004->GetYaxis()->SetTitleSize(0.06);
   pol41004->GetYaxis()->SetTitleOffset(1.25);
   pol41004->GetYaxis()->SetTitleFont(42);
   pol41004->SetParameter(0,86.1372);
   pol41004->SetParError(0,1.844583);
   pol41004->SetParLimits(0,0,0);
   pol41004->SetParameter(1,-0.00970597);
   pol41004->SetParError(1,0.002759162);
   pol41004->SetParLimits(1,0,0);
   pol41004->SetParameter(2,4.621455e-06);
   pol41004->SetParError(2,1.427907e-06);
   pol41004->SetParLimits(2,0,0);
   pol41004->SetParameter(3,-9.024528e-10);
   pol41004->SetParError(3,3.056892e-10);
   pol41004->SetParLimits(3,0,0);
   pol41004->SetParameter(4,6.104277e-14);
   pol41004->SetParError(4,2.306305e-14);
   pol41004->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41004);
   gre->Draw("p");
   
   Double_t _fx1005[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1005[12] = {
   78.80275,
   79.83697,
   79.4736,
   79.00428,
   79.74852,
   80.59213,
   80.47748,
   80.60422,
   80.19037,
   80.33487,
   79.15524,
   79.19809};
   Double_t _fex1005[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1005[12] = {
   0.3141925,
   0.2596278,
   0.2399551,
   0.2302209,
   0.2202367,
   0.2528952,
   0.2167597,
   0.2082684,
   0.2084001,
   0.2087831,
   0.2171829,
   0.2105065};
   gre = new TGraphErrors(12,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10011005 = new TH1F("Graph_Graph_Graph10011005","",100,770,5930);
   Graph_Graph_Graph10011005->SetMinimum(70);
   Graph_Graph_Graph10011005->SetMaximum(110);
   Graph_Graph_Graph10011005->SetDirectory(0);
   Graph_Graph_Graph10011005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10011005->SetLineColor(ci);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph_Graph10011005->GetXaxis()->SetRange(7,92);
   Graph_Graph_Graph10011005->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph10011005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitle("mean (GeV)");
   Graph_Graph_Graph10011005->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph10011005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10011005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10011005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10011005);
   
   
   TF1 *pol41006 = new TF1("pol4","pol4",1200,5500);
   pol41006->SetFillColor(19);
   pol41006->SetFillStyle(0);
   pol41006->SetLineColor(2);
   pol41006->SetLineWidth(2);
   pol41006->SetChisquare(20.80062);
   pol41006->SetNDF(7);
   pol41006->GetXaxis()->SetLabelFont(42);
   pol41006->GetXaxis()->SetLabelOffset(0.007);
   pol41006->GetXaxis()->SetLabelSize(0.05);
   pol41006->GetXaxis()->SetTitleSize(0.06);
   pol41006->GetXaxis()->SetTitleOffset(0.9);
   pol41006->GetXaxis()->SetTitleFont(42);
   pol41006->GetYaxis()->SetLabelFont(42);
   pol41006->GetYaxis()->SetLabelOffset(0.007);
   pol41006->GetYaxis()->SetLabelSize(0.05);
   pol41006->GetYaxis()->SetTitleSize(0.06);
   pol41006->GetYaxis()->SetTitleOffset(1.25);
   pol41006->GetYaxis()->SetTitleFont(42);
   pol41006->SetParameter(0,82.09884);
   pol41006->SetParError(0,2.88601);
   pol41006->SetParLimits(0,0,0);
   pol41006->SetParameter(1,-0.00583967);
   pol41006->SetParError(1,0.004178112);
   pol41006->SetParLimits(1,0,0);
   pol41006->SetParameter(2,3.819688e-06);
   pol41006->SetParError(2,2.098916e-06);
   pol41006->SetParLimits(2,0,0);
   pol41006->SetParameter(3,-8.760065e-10);
   pol41006->SetParError(3,4.381143e-10);
   pol41006->SetParLimits(3,0,0);
   pol41006->SetParameter(4,6.486623e-14);
   pol41006->SetParError(4,3.236115e-14);
   pol41006->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41006);
   gre->Draw("p");
   
   TF1 *pol41007 = new TF1("pol4","pol4",0,13000);
   pol41007->SetBit(TF1::kNotDraw);
   pol41007->SetFillColor(19);
   pol41007->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol41007->SetMarkerColor(ci);
   pol41007->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol41007->SetLineColor(ci);
   pol41007->SetLineWidth(3);
   pol41007->SetChisquare(20.80062);
   pol41007->SetNDF(7);
   pol41007->GetXaxis()->SetLabelFont(42);
   pol41007->GetXaxis()->SetLabelOffset(0.007);
   pol41007->GetXaxis()->SetLabelSize(0.05);
   pol41007->GetXaxis()->SetTitleSize(0.06);
   pol41007->GetXaxis()->SetTitleOffset(0.9);
   pol41007->GetXaxis()->SetTitleFont(42);
   pol41007->GetYaxis()->SetLabelFont(42);
   pol41007->GetYaxis()->SetLabelOffset(0.007);
   pol41007->GetYaxis()->SetLabelSize(0.05);
   pol41007->GetYaxis()->SetTitleSize(0.06);
   pol41007->GetYaxis()->SetTitleOffset(1.25);
   pol41007->GetYaxis()->SetTitleFont(42);
   pol41007->SetParameter(0,82.09884);
   pol41007->SetParError(0,2.88601);
   pol41007->SetParLimits(0,0,0);
   pol41007->SetParameter(1,-0.00583967);
   pol41007->SetParError(1,0.004178112);
   pol41007->SetParLimits(1,0,0);
   pol41007->SetParameter(2,3.819688e-06);
   pol41007->SetParError(2,2.098916e-06);
   pol41007->SetParLimits(2,0,0);
   pol41007->SetParameter(3,-8.760065e-10);
   pol41007->SetParError(3,4.381143e-10);
   pol41007->SetParLimits(3,0,0);
   pol41007->SetParameter(4,6.486623e-14);
   pol41007->SetParError(4,3.236115e-14);
   pol41007->SetParLimits(4,0,0);
   pol41007->Draw("Csame");
   
   TF1 *pol41008 = new TF1("pol4","pol4",0,13000);
   pol41008->SetBit(TF1::kNotDraw);
   pol41008->SetFillColor(19);
   pol41008->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol41008->SetMarkerColor(ci);
   pol41008->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   pol41008->SetLineColor(ci);
   pol41008->SetLineWidth(3);
   pol41008->SetLineStyle(9);
   pol41008->SetChisquare(19.93655);
   pol41008->SetNDF(7);
   pol41008->GetXaxis()->SetLabelFont(42);
   pol41008->GetXaxis()->SetLabelOffset(0.007);
   pol41008->GetXaxis()->SetLabelSize(0.05);
   pol41008->GetXaxis()->SetTitleSize(0.06);
   pol41008->GetXaxis()->SetTitleOffset(0.9);
   pol41008->GetXaxis()->SetTitleFont(42);
   pol41008->GetYaxis()->SetLabelFont(42);
   pol41008->GetYaxis()->SetLabelOffset(0.007);
   pol41008->GetYaxis()->SetLabelSize(0.05);
   pol41008->GetYaxis()->SetTitleSize(0.06);
   pol41008->GetYaxis()->SetTitleOffset(1.25);
   pol41008->GetYaxis()->SetTitleFont(42);
   pol41008->SetParameter(0,86.1372);
   pol41008->SetParError(0,1.844583);
   pol41008->SetParLimits(0,0,0);
   pol41008->SetParameter(1,-0.00970597);
   pol41008->SetParError(1,0.002759162);
   pol41008->SetParLimits(1,0,0);
   pol41008->SetParameter(2,4.621455e-06);
   pol41008->SetParError(2,1.427907e-06);
   pol41008->SetParLimits(2,0,0);
   pol41008->SetParameter(3,-9.024528e-10);
   pol41008->SetParError(3,3.056892e-10);
   pol41008->SetParLimits(3,0,0);
   pol41008->SetParameter(4,6.104277e-14);
   pol41008->SetParError(4,2.306305e-14);
   pol41008->SetParLimits(4,0,0);
   pol41008->Draw("Csame");
   
   Double_t _fx1007[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1007[12] = {
   79.92451,
   79.96981,
   79.76261,
   79.49294,
   79.60249,
   80.20395,
   80.26102,
   80.28704,
   79.79931,
   79.8226,
   79.63402,
   79.82387};
   Double_t _fex1007[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1007[12] = {
   0.1346253,
   0.1363727,
   0.1340652,
   0.1329057,
   0.1216077,
   0.1215835,
   0.1376727,
   0.1377837,
   0.1527598,
   0.1622615,
   0.1801102,
   0.1661582};
   gre = new TGraphErrors(12,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,770,5930);
   Graph_Graph1007->SetMinimum(79.25356);
   Graph_Graph1007->SetMaximum(80.5313);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   
   TF1 *pol41008 = new TF1("pol4","pol4",1200,5500);
   pol41008->SetFillColor(19);
   pol41008->SetFillStyle(0);
   pol41008->SetLineColor(2);
   pol41008->SetLineWidth(2);
   pol41008->SetChisquare(11.81771);
   pol41008->SetNDF(7);
   pol41008->GetXaxis()->SetLabelFont(42);
   pol41008->GetXaxis()->SetLabelOffset(0.007);
   pol41008->GetXaxis()->SetLabelSize(0.05);
   pol41008->GetXaxis()->SetTitleSize(0.06);
   pol41008->GetXaxis()->SetTitleOffset(0.9);
   pol41008->GetXaxis()->SetTitleFont(42);
   pol41008->GetYaxis()->SetLabelFont(42);
   pol41008->GetYaxis()->SetLabelOffset(0.007);
   pol41008->GetYaxis()->SetLabelSize(0.05);
   pol41008->GetYaxis()->SetTitleSize(0.06);
   pol41008->GetYaxis()->SetTitleOffset(1.25);
   pol41008->GetYaxis()->SetTitleFont(42);
   pol41008->SetParameter(0,86.25781);
   pol41008->SetParError(0,1.58763);
   pol41008->SetParLimits(0,0,0);
   pol41008->SetParameter(1,-0.01040125);
   pol41008->SetParError(1,0.002403718);
   pol41008->SetParLimits(1,0,0);
   pol41008->SetParameter(2,5.675402e-06);
   pol41008->SetParError(2,1.257619e-06);
   pol41008->SetParLimits(2,0,0);
   pol41008->SetParameter(3,-1.237689e-09);
   pol41008->SetParError(3,2.715502e-10);
   pol41008->SetParLimits(3,0,0);
   pol41008->SetParameter(4,9.295885e-14);
   pol41008->SetParError(4,2.061432e-14);
   pol41008->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41008);
   gre->Draw("p");
   
   Double_t _fx1009[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1009[12] = {
   81.08183,
   80.44182,
   80.332,
   80.4174,
   80.35192,
   81.55321,
   81.88242,
   81.71171,
   81.49291,
   81.11925,
   80.59434,
   80.43462};
   Double_t _fex1009[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[12] = {
   0.304055,
   0.3650219,
   0.3196991,
   0.2570849,
   0.2970831,
   0.2147883,
   0.2207561,
   0.1938879,
   0.1967176,
   0.2321226,
   0.1830584,
   0.1895822};
   gre = new TGraphErrors(12,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,770,5930);
   Graph_Graph1009->SetMinimum(79.80321);
   Graph_Graph1009->SetMaximum(82.31226);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   
   TF1 *pol41010 = new TF1("pol4","pol4",1200,5500);
   pol41010->SetFillColor(19);
   pol41010->SetFillStyle(0);
   pol41010->SetLineColor(2);
   pol41010->SetLineWidth(2);
   pol41010->SetChisquare(6.400779);
   pol41010->SetNDF(7);
   pol41010->GetXaxis()->SetLabelFont(42);
   pol41010->GetXaxis()->SetLabelOffset(0.007);
   pol41010->GetXaxis()->SetLabelSize(0.05);
   pol41010->GetXaxis()->SetTitleSize(0.06);
   pol41010->GetXaxis()->SetTitleOffset(0.9);
   pol41010->GetXaxis()->SetTitleFont(42);
   pol41010->GetYaxis()->SetLabelFont(42);
   pol41010->GetYaxis()->SetLabelOffset(0.007);
   pol41010->GetYaxis()->SetLabelSize(0.05);
   pol41010->GetYaxis()->SetTitleSize(0.06);
   pol41010->GetYaxis()->SetTitleOffset(1.25);
   pol41010->GetYaxis()->SetTitleFont(42);
   pol41010->SetParameter(0,90.02433);
   pol41010->SetParError(0,2.928674);
   pol41010->SetParLimits(0,0,0);
   pol41010->SetParameter(1,-0.01542362);
   pol41010->SetParError(1,0.0042338);
   pol41010->SetParLimits(1,0,0);
   pol41010->SetParameter(2,8.470172e-06);
   pol41010->SetParError(2,2.113416e-06);
   pol41010->SetParLimits(2,0,0);
   pol41010->SetParameter(3,-1.81176e-09);
   pol41010->SetParError(3,4.378538e-10);
   pol41010->SetParLimits(3,0,0);
   pol41010->SetParameter(4,1.316883e-13);
   pol41010->SetParError(4,3.212022e-14);
   pol41010->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41010);
   gre->Draw("p");
   
   TF1 *pol41011 = new TF1("pol4","pol4",0,13000);
   pol41011->SetBit(TF1::kNotDraw);
   pol41011->SetFillColor(19);
   pol41011->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol41011->SetMarkerColor(ci);
   pol41011->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol41011->SetLineColor(ci);
   pol41011->SetLineWidth(3);
   pol41011->SetChisquare(6.400779);
   pol41011->SetNDF(7);
   pol41011->GetXaxis()->SetLabelFont(42);
   pol41011->GetXaxis()->SetLabelOffset(0.007);
   pol41011->GetXaxis()->SetLabelSize(0.05);
   pol41011->GetXaxis()->SetTitleSize(0.06);
   pol41011->GetXaxis()->SetTitleOffset(0.9);
   pol41011->GetXaxis()->SetTitleFont(42);
   pol41011->GetYaxis()->SetLabelFont(42);
   pol41011->GetYaxis()->SetLabelOffset(0.007);
   pol41011->GetYaxis()->SetLabelSize(0.05);
   pol41011->GetYaxis()->SetTitleSize(0.06);
   pol41011->GetYaxis()->SetTitleOffset(1.25);
   pol41011->GetYaxis()->SetTitleFont(42);
   pol41011->SetParameter(0,90.02433);
   pol41011->SetParError(0,2.928674);
   pol41011->SetParLimits(0,0,0);
   pol41011->SetParameter(1,-0.01542362);
   pol41011->SetParError(1,0.0042338);
   pol41011->SetParLimits(1,0,0);
   pol41011->SetParameter(2,8.470172e-06);
   pol41011->SetParError(2,2.113416e-06);
   pol41011->SetParLimits(2,0,0);
   pol41011->SetParameter(3,-1.81176e-09);
   pol41011->SetParError(3,4.378538e-10);
   pol41011->SetParLimits(3,0,0);
   pol41011->SetParameter(4,1.316883e-13);
   pol41011->SetParError(4,3.212022e-14);
   pol41011->SetParLimits(4,0,0);
   pol41011->Draw("Csame");
   
   TF1 *pol41012 = new TF1("pol4","pol4",0,13000);
   pol41012->SetBit(TF1::kNotDraw);
   pol41012->SetFillColor(19);
   pol41012->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol41012->SetMarkerColor(ci);
   pol41012->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   pol41012->SetLineColor(ci);
   pol41012->SetLineWidth(3);
   pol41012->SetLineStyle(9);
   pol41012->SetChisquare(11.81771);
   pol41012->SetNDF(7);
   pol41012->GetXaxis()->SetLabelFont(42);
   pol41012->GetXaxis()->SetLabelOffset(0.007);
   pol41012->GetXaxis()->SetLabelSize(0.05);
   pol41012->GetXaxis()->SetTitleSize(0.06);
   pol41012->GetXaxis()->SetTitleOffset(0.9);
   pol41012->GetXaxis()->SetTitleFont(42);
   pol41012->GetYaxis()->SetLabelFont(42);
   pol41012->GetYaxis()->SetLabelOffset(0.007);
   pol41012->GetYaxis()->SetLabelSize(0.05);
   pol41012->GetYaxis()->SetTitleSize(0.06);
   pol41012->GetYaxis()->SetTitleOffset(1.25);
   pol41012->GetYaxis()->SetTitleFont(42);
   pol41012->SetParameter(0,86.25781);
   pol41012->SetParError(0,1.58763);
   pol41012->SetParLimits(0,0,0);
   pol41012->SetParameter(1,-0.01040125);
   pol41012->SetParError(1,0.002403718);
   pol41012->SetParLimits(1,0,0);
   pol41012->SetParameter(2,5.675402e-06);
   pol41012->SetParError(2,1.257619e-06);
   pol41012->SetParLimits(2,0,0);
   pol41012->SetParameter(3,-1.237689e-09);
   pol41012->SetParError(3,2.715502e-10);
   pol41012->SetParLimits(3,0,0);
   pol41012->SetParameter(4,9.295885e-14);
   pol41012->SetParError(4,2.061432e-14);
   pol41012->SetParLimits(4,0,0);
   pol41012->Draw("Csame");
   
   Double_t _fx1011[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1011[12] = {
   83.68408,
   83.26452,
   83.2611,
   83.0485,
   83.03126,
   83.00758,
   83.43317,
   83.47933,
   83.30737,
   83.24328,
   83.25811,
   83.56944};
   Double_t _fex1011[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[12] = {
   0.1508697,
   0.1645054,
   0.2039477,
   0.1405748,
   0.1300637,
   0.1348044,
   0.1353404,
   0.1393086,
   0.1487317,
   0.1618926,
   0.2140511,
   0.2221806};
   gre = new TGraphErrors(12,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,770,5930);
   Graph_Graph1011->SetMinimum(82.77655);
   Graph_Graph1011->SetMaximum(83.93117);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   
   TF1 *pol41012 = new TF1("pol4","pol4",1200,5500);
   pol41012->SetFillColor(19);
   pol41012->SetFillStyle(0);
   pol41012->SetLineColor(2);
   pol41012->SetLineWidth(2);
   pol41012->SetChisquare(2.508343);
   pol41012->SetNDF(7);
   pol41012->GetXaxis()->SetLabelFont(42);
   pol41012->GetXaxis()->SetLabelOffset(0.007);
   pol41012->GetXaxis()->SetLabelSize(0.05);
   pol41012->GetXaxis()->SetTitleSize(0.06);
   pol41012->GetXaxis()->SetTitleOffset(0.9);
   pol41012->GetXaxis()->SetTitleFont(42);
   pol41012->GetYaxis()->SetLabelFont(42);
   pol41012->GetYaxis()->SetLabelOffset(0.007);
   pol41012->GetYaxis()->SetLabelSize(0.05);
   pol41012->GetYaxis()->SetTitleSize(0.06);
   pol41012->GetYaxis()->SetTitleOffset(1.25);
   pol41012->GetYaxis()->SetTitleFont(42);
   pol41012->SetParameter(0,90.58144);
   pol41012->SetParError(0,1.750395);
   pol41012->SetParLimits(0,0,0);
   pol41012->SetParameter(1,-0.01070784);
   pol41012->SetParError(1,0.002648699);
   pol41012->SetParLimits(1,0,0);
   pol41012->SetParameter(2,5.324103e-06);
   pol41012->SetParError(2,1.385902e-06);
   pol41012->SetParLimits(2,0,0);
   pol41012->SetParameter(3,-1.089474e-09);
   pol41012->SetParError(3,2.997772e-10);
   pol41012->SetParLimits(3,0,0);
   pol41012->SetParameter(4,7.879727e-14);
   pol41012->SetParError(4,2.283541e-14);
   pol41012->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41012);
   gre->Draw("p");
   
   Double_t _fx1013[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1013[12] = {
   83.6673,
   83.67325,
   82.97298,
   83.20606,
   83.37284,
   84.5696,
   84.79382,
   84.52379,
   84.39144,
   84.15033,
   83.80656,
   83.79318};
   Double_t _fex1013[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[12] = {
   0.3365848,
   0.3040904,
   0.2826239,
   0.2481109,
   0.2320903,
   0.2391974,
   0.2215592,
   0.2125884,
   0.2012651,
   0.2065483,
   0.2572267,
   0.2546834};
   gre = new TGraphErrors(12,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,770,5930);
   Graph_Graph1013->SetMinimum(82.45785);
   Graph_Graph1013->SetMaximum(85.24789);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   
   TF1 *pol41014 = new TF1("pol4","pol4",1200,5500);
   pol41014->SetFillColor(19);
   pol41014->SetFillStyle(0);
   pol41014->SetLineColor(2);
   pol41014->SetLineWidth(2);
   pol41014->SetChisquare(10.10066);
   pol41014->SetNDF(7);
   pol41014->GetXaxis()->SetLabelFont(42);
   pol41014->GetXaxis()->SetLabelOffset(0.007);
   pol41014->GetXaxis()->SetLabelSize(0.05);
   pol41014->GetXaxis()->SetTitleSize(0.06);
   pol41014->GetXaxis()->SetTitleOffset(0.9);
   pol41014->GetXaxis()->SetTitleFont(42);
   pol41014->GetYaxis()->SetLabelFont(42);
   pol41014->GetYaxis()->SetLabelOffset(0.007);
   pol41014->GetYaxis()->SetLabelSize(0.05);
   pol41014->GetYaxis()->SetTitleSize(0.06);
   pol41014->GetYaxis()->SetTitleOffset(1.25);
   pol41014->GetYaxis()->SetTitleFont(42);
   pol41014->SetParameter(0,91.87023);
   pol41014->SetParError(0,3.101344);
   pol41014->SetParLimits(0,0,0);
   pol41014->SetParameter(1,-0.01424025);
   pol41014->SetParError(1,0.004494223);
   pol41014->SetParLimits(1,0,0);
   pol41014->SetParameter(2,8.009821e-06);
   pol41014->SetParError(2,2.262458e-06);
   pol41014->SetParLimits(2,0,0);
   pol41014->SetParameter(3,-1.743245e-09);
   pol41014->SetParError(3,4.734583e-10);
   pol41014->SetParLimits(3,0,0);
   pol41014->SetParameter(4,1.29029e-13);
   pol41014->SetParError(4,3.506766e-14);
   pol41014->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41014);
   gre->Draw("p");
   
   TF1 *pol41015 = new TF1("pol4","pol4",0,13000);
   pol41015->SetBit(TF1::kNotDraw);
   pol41015->SetFillColor(19);
   pol41015->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol41015->SetMarkerColor(ci);
   pol41015->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol41015->SetLineColor(ci);
   pol41015->SetLineWidth(3);
   pol41015->SetChisquare(10.10066);
   pol41015->SetNDF(7);
   pol41015->GetXaxis()->SetLabelFont(42);
   pol41015->GetXaxis()->SetLabelOffset(0.007);
   pol41015->GetXaxis()->SetLabelSize(0.05);
   pol41015->GetXaxis()->SetTitleSize(0.06);
   pol41015->GetXaxis()->SetTitleOffset(0.9);
   pol41015->GetXaxis()->SetTitleFont(42);
   pol41015->GetYaxis()->SetLabelFont(42);
   pol41015->GetYaxis()->SetLabelOffset(0.007);
   pol41015->GetYaxis()->SetLabelSize(0.05);
   pol41015->GetYaxis()->SetTitleSize(0.06);
   pol41015->GetYaxis()->SetTitleOffset(1.25);
   pol41015->GetYaxis()->SetTitleFont(42);
   pol41015->SetParameter(0,91.87023);
   pol41015->SetParError(0,3.101344);
   pol41015->SetParLimits(0,0,0);
   pol41015->SetParameter(1,-0.01424025);
   pol41015->SetParError(1,0.004494223);
   pol41015->SetParLimits(1,0,0);
   pol41015->SetParameter(2,8.009821e-06);
   pol41015->SetParError(2,2.262458e-06);
   pol41015->SetParLimits(2,0,0);
   pol41015->SetParameter(3,-1.743245e-09);
   pol41015->SetParError(3,4.734583e-10);
   pol41015->SetParLimits(3,0,0);
   pol41015->SetParameter(4,1.29029e-13);
   pol41015->SetParError(4,3.506766e-14);
   pol41015->SetParLimits(4,0,0);
   pol41015->Draw("Csame");
   
   TF1 *pol41016 = new TF1("pol4","pol4",0,13000);
   pol41016->SetBit(TF1::kNotDraw);
   pol41016->SetFillColor(19);
   pol41016->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol41016->SetMarkerColor(ci);
   pol41016->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   pol41016->SetLineColor(ci);
   pol41016->SetLineWidth(3);
   pol41016->SetLineStyle(9);
   pol41016->SetChisquare(2.508343);
   pol41016->SetNDF(7);
   pol41016->GetXaxis()->SetLabelFont(42);
   pol41016->GetXaxis()->SetLabelOffset(0.007);
   pol41016->GetXaxis()->SetLabelSize(0.05);
   pol41016->GetXaxis()->SetTitleSize(0.06);
   pol41016->GetXaxis()->SetTitleOffset(0.9);
   pol41016->GetXaxis()->SetTitleFont(42);
   pol41016->GetYaxis()->SetLabelFont(42);
   pol41016->GetYaxis()->SetLabelOffset(0.007);
   pol41016->GetYaxis()->SetLabelSize(0.05);
   pol41016->GetYaxis()->SetTitleSize(0.06);
   pol41016->GetYaxis()->SetTitleOffset(1.25);
   pol41016->GetYaxis()->SetTitleFont(42);
   pol41016->SetParameter(0,90.58144);
   pol41016->SetParError(0,1.750395);
   pol41016->SetParLimits(0,0,0);
   pol41016->SetParameter(1,-0.01070784);
   pol41016->SetParError(1,0.002648699);
   pol41016->SetParLimits(1,0,0);
   pol41016->SetParameter(2,5.324103e-06);
   pol41016->SetParError(2,1.385902e-06);
   pol41016->SetParLimits(2,0,0);
   pol41016->SetParameter(3,-1.089474e-09);
   pol41016->SetParError(3,2.997772e-10);
   pol41016->SetParLimits(3,0,0);
   pol41016->SetParameter(4,7.879727e-14);
   pol41016->SetParError(4,2.283541e-14);
   pol41016->SetParLimits(4,0,0);
   pol41016->Draw("Csame");
   
   Double_t _fx1015[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1015[12] = {
   90.55449,
   90.16029,
   90.01056,
   89.95202,
   89.70455,
   89.89379,
   90.27863,
   90.41625,
   90.25285,
   90.15965,
   89.94003,
   89.96106};
   Double_t _fex1015[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[12] = {
   0.1585064,
   0.1171365,
   0.1123532,
   0.1080294,
   0.1062443,
   0.1111197,
   0.11277,
   0.1207591,
   0.1212129,
   0.1335803,
   0.152367,
   0.1629037};
   gre = new TGraphErrors(12,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,770,5930);
   Graph_Graph1015->SetMinimum(89.48684);
   Graph_Graph1015->SetMaximum(90.82446);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   
   TF1 *pol41016 = new TF1("pol4","pol4",1200,5500);
   pol41016->SetFillColor(19);
   pol41016->SetFillStyle(0);
   pol41016->SetLineColor(2);
   pol41016->SetLineWidth(2);
   pol41016->SetChisquare(3.695457);
   pol41016->SetNDF(7);
   pol41016->GetXaxis()->SetLabelFont(42);
   pol41016->GetXaxis()->SetLabelOffset(0.007);
   pol41016->GetXaxis()->SetLabelSize(0.05);
   pol41016->GetXaxis()->SetTitleSize(0.06);
   pol41016->GetXaxis()->SetTitleOffset(0.9);
   pol41016->GetXaxis()->SetTitleFont(42);
   pol41016->GetYaxis()->SetLabelFont(42);
   pol41016->GetYaxis()->SetLabelOffset(0.007);
   pol41016->GetYaxis()->SetLabelSize(0.05);
   pol41016->GetYaxis()->SetTitleSize(0.06);
   pol41016->GetYaxis()->SetTitleOffset(1.25);
   pol41016->GetYaxis()->SetTitleFont(42);
   pol41016->SetParameter(0,98.05723);
   pol41016->SetParError(0,1.529745);
   pol41016->SetParLimits(0,0,0);
   pol41016->SetParameter(1,-0.01143001);
   pol41016->SetParError(1,0.002259668);
   pol41016->SetParLimits(1,0,0);
   pol41016->SetParameter(2,5.533302e-06);
   pol41016->SetParError(2,1.161646e-06);
   pol41016->SetParLimits(2,0,0);
   pol41016->SetParameter(3,-1.090645e-09);
   pol41016->SetParError(3,2.479265e-10);
   pol41016->SetParLimits(3,0,0);
   pol41016->SetParameter(4,7.52358e-14);
   pol41016->SetParError(4,1.868915e-14);
   pol41016->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41016);
   gre->Draw("p");
   
   Double_t _fx1017[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1017[12] = {
   91.36286,
   91.19247,
   91.54535,
   91.04032,
   90.44748,
   91.53131,
   91.991,
   92.067,
   91.18127,
   91.57623,
   90.99645,
   90.80007};
   Double_t _fex1017[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1017[12] = {
   0.3054709,
   0.2615969,
   0.2395836,
   0.2256955,
   0.2180103,
   0.183482,
   0.2028377,
   0.199495,
   0.2157734,
   0.1957266,
   0.1893679,
   0.1900128};
   gre = new TGraphErrors(12,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,770,5930);
   Graph_Graph1017->SetMinimum(90.02577);
   Graph_Graph1017->SetMaximum(92.4702);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   
   TF1 *pol41018 = new TF1("pol4","pol4",1200,5500);
   pol41018->SetFillColor(19);
   pol41018->SetFillStyle(0);
   pol41018->SetLineColor(2);
   pol41018->SetLineWidth(2);
   pol41018->SetChisquare(23.34421);
   pol41018->SetNDF(7);
   pol41018->GetXaxis()->SetLabelFont(42);
   pol41018->GetXaxis()->SetLabelOffset(0.007);
   pol41018->GetXaxis()->SetLabelSize(0.05);
   pol41018->GetXaxis()->SetTitleSize(0.06);
   pol41018->GetXaxis()->SetTitleOffset(0.9);
   pol41018->GetXaxis()->SetTitleFont(42);
   pol41018->GetYaxis()->SetLabelFont(42);
   pol41018->GetYaxis()->SetLabelOffset(0.007);
   pol41018->GetYaxis()->SetLabelSize(0.05);
   pol41018->GetYaxis()->SetTitleSize(0.06);
   pol41018->GetYaxis()->SetTitleOffset(1.25);
   pol41018->GetYaxis()->SetTitleFont(42);
   pol41018->SetParameter(0,99.42736);
   pol41018->SetParError(0,2.754521);
   pol41018->SetParLimits(0,0,0);
   pol41018->SetParameter(1,-0.01275441);
   pol41018->SetParError(1,0.003980035);
   pol41018->SetParLimits(1,0,0);
   pol41018->SetParameter(2,6.644108e-06);
   pol41018->SetParError(2,1.9937e-06);
   pol41018->SetParLimits(2,0,0);
   pol41018->SetParameter(3,-1.372171e-09);
   pol41018->SetParError(3,4.144066e-10);
   pol41018->SetParLimits(3,0,0);
   pol41018->SetParameter(4,9.712339e-14);
   pol41018->SetParError(4,3.047325e-14);
   pol41018->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41018);
   gre->Draw("p");
   
   TF1 *pol41019 = new TF1("pol4","pol4",0,13000);
   pol41019->SetBit(TF1::kNotDraw);
   pol41019->SetFillColor(19);
   pol41019->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol41019->SetMarkerColor(ci);
   pol41019->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol41019->SetLineColor(ci);
   pol41019->SetLineWidth(3);
   pol41019->SetChisquare(23.34421);
   pol41019->SetNDF(7);
   pol41019->GetXaxis()->SetLabelFont(42);
   pol41019->GetXaxis()->SetLabelOffset(0.007);
   pol41019->GetXaxis()->SetLabelSize(0.05);
   pol41019->GetXaxis()->SetTitleSize(0.06);
   pol41019->GetXaxis()->SetTitleOffset(0.9);
   pol41019->GetXaxis()->SetTitleFont(42);
   pol41019->GetYaxis()->SetLabelFont(42);
   pol41019->GetYaxis()->SetLabelOffset(0.007);
   pol41019->GetYaxis()->SetLabelSize(0.05);
   pol41019->GetYaxis()->SetTitleSize(0.06);
   pol41019->GetYaxis()->SetTitleOffset(1.25);
   pol41019->GetYaxis()->SetTitleFont(42);
   pol41019->SetParameter(0,99.42736);
   pol41019->SetParError(0,2.754521);
   pol41019->SetParLimits(0,0,0);
   pol41019->SetParameter(1,-0.01275441);
   pol41019->SetParError(1,0.003980035);
   pol41019->SetParLimits(1,0,0);
   pol41019->SetParameter(2,6.644108e-06);
   pol41019->SetParError(2,1.9937e-06);
   pol41019->SetParLimits(2,0,0);
   pol41019->SetParameter(3,-1.372171e-09);
   pol41019->SetParError(3,4.144066e-10);
   pol41019->SetParLimits(3,0,0);
   pol41019->SetParameter(4,9.712339e-14);
   pol41019->SetParError(4,3.047325e-14);
   pol41019->SetParLimits(4,0,0);
   pol41019->Draw("Csame");
   
   TF1 *pol41020 = new TF1("pol4","pol4",0,13000);
   pol41020->SetBit(TF1::kNotDraw);
   pol41020->SetFillColor(19);
   pol41020->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol41020->SetMarkerColor(ci);
   pol41020->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   pol41020->SetLineColor(ci);
   pol41020->SetLineWidth(3);
   pol41020->SetLineStyle(9);
   pol41020->SetChisquare(3.695457);
   pol41020->SetNDF(7);
   pol41020->GetXaxis()->SetLabelFont(42);
   pol41020->GetXaxis()->SetLabelOffset(0.007);
   pol41020->GetXaxis()->SetLabelSize(0.05);
   pol41020->GetXaxis()->SetTitleSize(0.06);
   pol41020->GetXaxis()->SetTitleOffset(0.9);
   pol41020->GetXaxis()->SetTitleFont(42);
   pol41020->GetYaxis()->SetLabelFont(42);
   pol41020->GetYaxis()->SetLabelOffset(0.007);
   pol41020->GetYaxis()->SetLabelSize(0.05);
   pol41020->GetYaxis()->SetTitleSize(0.06);
   pol41020->GetYaxis()->SetTitleOffset(1.25);
   pol41020->GetYaxis()->SetTitleFont(42);
   pol41020->SetParameter(0,98.05723);
   pol41020->SetParError(0,1.529745);
   pol41020->SetParLimits(0,0,0);
   pol41020->SetParameter(1,-0.01143001);
   pol41020->SetParError(1,0.002259668);
   pol41020->SetParLimits(1,0,0);
   pol41020->SetParameter(2,5.533302e-06);
   pol41020->SetParError(2,1.161646e-06);
   pol41020->SetParLimits(2,0,0);
   pol41020->SetParameter(3,-1.090645e-09);
   pol41020->SetParError(3,2.479265e-10);
   pol41020->SetParLimits(3,0,0);
   pol41020->SetParameter(4,7.52358e-14);
   pol41020->SetParError(4,1.868915e-14);
   pol41020->SetParLimits(4,0,0);
   pol41020->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("pol4","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol4","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol4","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol4","G_{B}#rightarrow ZZ","L");

   ci = TColor::GetColor("#ffd300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   leg = new TLegend(0.7788945,0.1783217,0.9974874,0.2482517,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","HPHP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("","HPLP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.936,"(13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.89284,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.83524,"Simulation Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.03648);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

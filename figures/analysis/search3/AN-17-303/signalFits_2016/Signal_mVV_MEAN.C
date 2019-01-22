void Signal_mVV_MEAN()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 14:33:58 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(390,-842.5257,5806.667,7681.959);
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
   
   TF1 *pol11 = new TF1("pol1","pol1",0,13000);
   pol11->SetBit(TF1::kNotDraw);
   pol11->SetFillColor(19);
   pol11->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   pol11->SetMarkerColor(ci);
   pol11->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol11->SetLineColor(ci);
   pol11->SetLineWidth(3);
   pol11->SetChisquare(176.3743);
   pol11->SetNDF(10);
   pol11->GetXaxis()->SetTitle("M_{X} (GeV)");
   pol11->GetXaxis()->SetRange(9,43);
   pol11->GetXaxis()->SetNdivisions(209);
   pol11->GetXaxis()->SetLabelFont(42);
   pol11->GetXaxis()->SetLabelOffset(0.007);
   pol11->GetXaxis()->SetLabelSize(0.05);
   pol11->GetXaxis()->SetTitleSize(0.06);
   pol11->GetXaxis()->SetTitleOffset(0.94);
   pol11->GetXaxis()->SetTitleFont(42);
   pol11->GetYaxis()->SetTitle("MEAN (GeV)");
   pol11->GetYaxis()->SetNdivisions(504);
   pol11->GetYaxis()->SetLabelFont(42);
   pol11->GetYaxis()->SetLabelOffset(0.007);
   pol11->GetYaxis()->SetLabelSize(0.05);
   pol11->GetYaxis()->SetTitleSize(0.06);
   pol11->GetYaxis()->SetTitleOffset(0.97);
   pol11->GetYaxis()->SetTitleFont(42);
   pol11->SetParameter(0,25.85014);
   pol11->SetParError(0,0.7199762);
   pol11->SetParLimits(0,0,0);
   pol11->SetParameter(1,1.005694);
   pol11->SetParError(1,0.0003024709);
   pol11->SetParLimits(1,0,0);
   pol11->Draw("C");
   
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
   1237.863,
   1432.011,
   1627.751,
   1832.256,
   2037.262,
   2542.285,
   3045.203,
   3551.581,
   4048.676,
   4552.484,
   5060.566,
   5544.983};
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
   0.7382809,
   0.7685463,
   1.019098,
   0.964271,
   0.9329197,
   1.093306,
   1.335075,
   1.650869,
   1.678028,
   1.820182,
   2.174839,
   2.310232};
   TGraphErrors *gre = new TGraphErrors(12,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,770,5930);
   Graph_Graph1001->SetMinimum(806.1078);
   Graph_Graph1001->SetMaximum(5978.31);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *pol11002 = new TF1("pol1","pol1",1200,5500);
   pol11002->SetFillColor(19);
   pol11002->SetFillStyle(0);
   pol11002->SetLineColor(2);
   pol11002->SetLineWidth(2);
   pol11002->SetChisquare(176.3743);
   pol11002->SetNDF(10);
   pol11002->GetXaxis()->SetLabelFont(42);
   pol11002->GetXaxis()->SetLabelOffset(0.007);
   pol11002->GetXaxis()->SetLabelSize(0.05);
   pol11002->GetXaxis()->SetTitleSize(0.06);
   pol11002->GetXaxis()->SetTitleOffset(0.9);
   pol11002->GetXaxis()->SetTitleFont(42);
   pol11002->GetYaxis()->SetLabelFont(42);
   pol11002->GetYaxis()->SetLabelOffset(0.007);
   pol11002->GetYaxis()->SetLabelSize(0.05);
   pol11002->GetYaxis()->SetTitleSize(0.06);
   pol11002->GetYaxis()->SetTitleOffset(1.25);
   pol11002->GetYaxis()->SetTitleFont(42);
   pol11002->SetParameter(0,25.85014);
   pol11002->SetParError(0,0.7199762);
   pol11002->SetParLimits(0,0,0);
   pol11002->SetParameter(1,1.005694);
   pol11002->SetParError(1,0.0003024709);
   pol11002->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(pol11002);
   gre->Draw("p");
   
   TF1 *pol11003 = new TF1("pol1","pol1",0,13000);
   pol11003->SetBit(TF1::kNotDraw);
   pol11003->SetFillColor(19);
   pol11003->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol11003->SetMarkerColor(ci);
   pol11003->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol11003->SetLineColor(ci);
   pol11003->SetLineWidth(3);
   pol11003->SetChisquare(176.3743);
   pol11003->SetNDF(10);
   pol11003->GetXaxis()->SetTitle("M_{X} (GeV)");
   pol11003->GetXaxis()->SetRange(9,43);
   pol11003->GetXaxis()->SetNdivisions(209);
   pol11003->GetXaxis()->SetLabelFont(42);
   pol11003->GetXaxis()->SetLabelOffset(0.007);
   pol11003->GetXaxis()->SetLabelSize(0.05);
   pol11003->GetXaxis()->SetTitleSize(0.06);
   pol11003->GetXaxis()->SetTitleOffset(0.94);
   pol11003->GetXaxis()->SetTitleFont(42);
   pol11003->GetYaxis()->SetTitle("MEAN (GeV)");
   pol11003->GetYaxis()->SetNdivisions(504);
   pol11003->GetYaxis()->SetLabelFont(42);
   pol11003->GetYaxis()->SetLabelOffset(0.007);
   pol11003->GetYaxis()->SetLabelSize(0.05);
   pol11003->GetYaxis()->SetTitleSize(0.06);
   pol11003->GetYaxis()->SetTitleOffset(0.97);
   pol11003->GetYaxis()->SetTitleFont(42);
   pol11003->SetParameter(0,25.85014);
   pol11003->SetParError(0,0.7199762);
   pol11003->SetParLimits(0,0,0);
   pol11003->SetParameter(1,1.005694);
   pol11003->SetParError(1,0.0003024709);
   pol11003->SetParLimits(1,0,0);
   pol11003->Draw("Csame");
   
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
   1240.64,
   1436.51,
   1630.448,
   1836.572,
   2040.79,
   2546.179,
   3052.642,
   3553.799,
   4056.458,
   4561.416,
   5058.547,
   5560.527};
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
   0.7770959,
   0.7840759,
   1.020611,
   0.9533647,
   0.9095794,
   1.065086,
   1.346606,
   1.381212,
   1.616336,
   1.790213,
   1.931564,
   2.245046};
   gre = new TGraphErrors(12,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,770,5930);
   Graph_Graph1003->SetMinimum(807.5724);
   Graph_Graph1003->SetMaximum(5995.063);
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
   
   
   TF1 *pol11004 = new TF1("pol1","pol1",1200,5500);
   pol11004->SetFillColor(19);
   pol11004->SetFillStyle(0);
   pol11004->SetLineColor(2);
   pol11004->SetLineWidth(2);
   pol11004->SetChisquare(141.6304);
   pol11004->SetNDF(10);
   pol11004->GetXaxis()->SetLabelFont(42);
   pol11004->GetXaxis()->SetLabelOffset(0.007);
   pol11004->GetXaxis()->SetLabelSize(0.05);
   pol11004->GetXaxis()->SetTitleSize(0.06);
   pol11004->GetXaxis()->SetTitleOffset(0.9);
   pol11004->GetXaxis()->SetTitleFont(42);
   pol11004->GetYaxis()->SetLabelFont(42);
   pol11004->GetYaxis()->SetLabelOffset(0.007);
   pol11004->GetYaxis()->SetLabelSize(0.05);
   pol11004->GetYaxis()->SetTitleSize(0.06);
   pol11004->GetYaxis()->SetTitleOffset(1.25);
   pol11004->GetYaxis()->SetTitleFont(42);
   pol11004->SetParameter(0,27.41835);
   pol11004->SetParError(0,0.7177243);
   pol11004->SetParLimits(0,0,0);
   pol11004->SetParameter(1,1.006903);
   pol11004->SetParError(1,0.000291881);
   pol11004->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(pol11004);
   gre->Draw("p");
   
   TF1 *pol11005 = new TF1("pol1","pol1",0,13000);
   pol11005->SetBit(TF1::kNotDraw);
   pol11005->SetFillColor(19);
   pol11005->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol11005->SetMarkerColor(ci);
   pol11005->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol11005->SetLineColor(ci);
   pol11005->SetLineWidth(3);
   pol11005->SetChisquare(141.6304);
   pol11005->SetNDF(10);
   pol11005->GetXaxis()->SetLabelFont(42);
   pol11005->GetXaxis()->SetLabelOffset(0.007);
   pol11005->GetXaxis()->SetLabelSize(0.05);
   pol11005->GetXaxis()->SetTitleSize(0.06);
   pol11005->GetXaxis()->SetTitleOffset(0.9);
   pol11005->GetXaxis()->SetTitleFont(42);
   pol11005->GetYaxis()->SetLabelFont(42);
   pol11005->GetYaxis()->SetLabelOffset(0.007);
   pol11005->GetYaxis()->SetLabelSize(0.05);
   pol11005->GetYaxis()->SetTitleSize(0.06);
   pol11005->GetYaxis()->SetTitleOffset(1.25);
   pol11005->GetYaxis()->SetTitleFont(42);
   pol11005->SetParameter(0,27.41835);
   pol11005->SetParError(0,0.7177243);
   pol11005->SetParLimits(0,0,0);
   pol11005->SetParameter(1,1.006903);
   pol11005->SetParError(1,0.000291881);
   pol11005->SetParLimits(1,0,0);
   pol11005->Draw("Csame");
   
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
   1234.753,
   1425.469,
   1629.66,
   1827.217,
   2032.241,
   2534.613,
   3035.19,
   3539.359,
   4039.395,
   4576.492,
   5053.436,
   5533.799};
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
   0.5081357,
   0.5313469,
   0.5711195,
   0.633934,
   0.6309144,
   0.7739755,
   0.9619804,
   1.0146,
   1.166109,
   1.268063,
   1.815021,
   2.133023};
   gre = new TGraphErrors(12,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,770,5930);
   Graph_Graph1005->SetMinimum(804.0762);
   Graph_Graph1005->SetMaximum(5966.1);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   
   TF1 *pol11006 = new TF1("pol1","pol1",1200,5500);
   pol11006->SetFillColor(19);
   pol11006->SetFillStyle(0);
   pol11006->SetLineColor(2);
   pol11006->SetLineWidth(2);
   pol11006->SetChisquare(920.5);
   pol11006->SetNDF(10);
   pol11006->GetXaxis()->SetLabelFont(42);
   pol11006->GetXaxis()->SetLabelOffset(0.007);
   pol11006->GetXaxis()->SetLabelSize(0.05);
   pol11006->GetXaxis()->SetTitleSize(0.06);
   pol11006->GetXaxis()->SetTitleOffset(0.9);
   pol11006->GetXaxis()->SetTitleFont(42);
   pol11006->GetYaxis()->SetLabelFont(42);
   pol11006->GetYaxis()->SetLabelOffset(0.007);
   pol11006->GetYaxis()->SetLabelSize(0.05);
   pol11006->GetYaxis()->SetTitleSize(0.06);
   pol11006->GetYaxis()->SetTitleOffset(1.25);
   pol11006->GetYaxis()->SetTitleFont(42);
   pol11006->SetParameter(0,20.27973);
   pol11006->SetParError(0,0.5059699);
   pol11006->SetParLimits(0,0,0);
   pol11006->SetParameter(1,1.006262);
   pol11006->SetParError(1,0.0002223883);
   pol11006->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(pol11006);
   gre->Draw("p");
   
   TF1 *pol11007 = new TF1("pol1","pol1",0,13000);
   pol11007->SetBit(TF1::kNotDraw);
   pol11007->SetFillColor(19);
   pol11007->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol11007->SetMarkerColor(ci);
   pol11007->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol11007->SetLineColor(ci);
   pol11007->SetLineWidth(3);
   pol11007->SetChisquare(920.5);
   pol11007->SetNDF(10);
   pol11007->GetXaxis()->SetLabelFont(42);
   pol11007->GetXaxis()->SetLabelOffset(0.007);
   pol11007->GetXaxis()->SetLabelSize(0.05);
   pol11007->GetXaxis()->SetTitleSize(0.06);
   pol11007->GetXaxis()->SetTitleOffset(0.9);
   pol11007->GetXaxis()->SetTitleFont(42);
   pol11007->GetYaxis()->SetLabelFont(42);
   pol11007->GetYaxis()->SetLabelOffset(0.007);
   pol11007->GetYaxis()->SetLabelSize(0.05);
   pol11007->GetYaxis()->SetTitleSize(0.06);
   pol11007->GetYaxis()->SetTitleOffset(1.25);
   pol11007->GetYaxis()->SetTitleFont(42);
   pol11007->SetParameter(0,20.27973);
   pol11007->SetParError(0,0.5059699);
   pol11007->SetParLimits(0,0,0);
   pol11007->SetParameter(1,1.006262);
   pol11007->SetParError(1,0.0002223883);
   pol11007->SetParLimits(1,0,0);
   pol11007->Draw("Csame");
   
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
   1234.807,
   1424.775,
   1620.36,
   1823.616,
   2030.411,
   2534.496,
   3033.881,
   3541.11,
   4037.395,
   4539.235,
   5043.431,
   5581.906};
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
   0.7251281,
   0.5671556,
   0.6588596,
   0.6783023,
   0.6719103,
   0.7920617,
   1.005143,
   1.05267,
   1.25285,
   1.356856,
   1.45721,
   1.766118};
   gre = new TGraphErrors(12,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,770,5930);
   Graph_Graph1007->SetMinimum(799.123);
   Graph_Graph1007->SetMaximum(6018.631);
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
   
   
   TF1 *pol11008 = new TF1("pol1","pol1",1200,5500);
   pol11008->SetFillColor(19);
   pol11008->SetFillStyle(0);
   pol11008->SetLineColor(2);
   pol11008->SetLineWidth(2);
   pol11008->SetChisquare(704.2894);
   pol11008->SetNDF(10);
   pol11008->GetXaxis()->SetLabelFont(42);
   pol11008->GetXaxis()->SetLabelOffset(0.007);
   pol11008->GetXaxis()->SetLabelSize(0.05);
   pol11008->GetXaxis()->SetTitleSize(0.06);
   pol11008->GetXaxis()->SetTitleOffset(0.9);
   pol11008->GetXaxis()->SetTitleFont(42);
   pol11008->GetYaxis()->SetLabelFont(42);
   pol11008->GetYaxis()->SetLabelOffset(0.007);
   pol11008->GetYaxis()->SetLabelSize(0.05);
   pol11008->GetYaxis()->SetTitleSize(0.06);
   pol11008->GetYaxis()->SetTitleOffset(1.25);
   pol11008->GetYaxis()->SetTitleFont(42);
   pol11008->SetParameter(0,15.63064);
   pol11008->SetParError(0,0.5542666);
   pol11008->SetParLimits(0,0,0);
   pol11008->SetParameter(1,1.006811);
   pol11008->SetParError(1,0.0002259976);
   pol11008->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(pol11008);
   gre->Draw("p");
   
   TF1 *pol11009 = new TF1("pol1","pol1",0,13000);
   pol11009->SetBit(TF1::kNotDraw);
   pol11009->SetFillColor(19);
   pol11009->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol11009->SetMarkerColor(ci);
   pol11009->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol11009->SetLineColor(ci);
   pol11009->SetLineWidth(3);
   pol11009->SetChisquare(704.2894);
   pol11009->SetNDF(10);
   pol11009->GetXaxis()->SetLabelFont(42);
   pol11009->GetXaxis()->SetLabelOffset(0.007);
   pol11009->GetXaxis()->SetLabelSize(0.05);
   pol11009->GetXaxis()->SetTitleSize(0.06);
   pol11009->GetXaxis()->SetTitleOffset(0.9);
   pol11009->GetXaxis()->SetTitleFont(42);
   pol11009->GetYaxis()->SetLabelFont(42);
   pol11009->GetYaxis()->SetLabelOffset(0.007);
   pol11009->GetYaxis()->SetLabelSize(0.05);
   pol11009->GetYaxis()->SetTitleSize(0.06);
   pol11009->GetYaxis()->SetTitleOffset(1.25);
   pol11009->GetYaxis()->SetTitleFont(42);
   pol11009->SetParameter(0,15.63064);
   pol11009->SetParError(0,0.5542666);
   pol11009->SetParLimits(0,0,0);
   pol11009->SetParameter(1,1.006811);
   pol11009->SetParError(1,0.0002259976);
   pol11009->SetParLimits(1,0,0);
   pol11009->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("pol1","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol1","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol1","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol1","G_{B}#rightarrow ZZ","L");

   ci = TColor::GetColor("#ffd300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
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

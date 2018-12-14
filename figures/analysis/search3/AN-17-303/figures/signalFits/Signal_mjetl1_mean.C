void Signal_mjetl1_mean()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:17:34 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(457.4286,62.57732,5728.857,114.1237);
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
   
   Double_t _fx1017[13] = {
   1000,
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
   Double_t _fy1017[13] = {
   81.42666,
   80.4604,
   79.92141,
   79.85342,
   79.34401,
   79.70636,
   80.06163,
   80.27869,
   80.56229,
   79.78898,
   80.41483,
   79.95961,
   79.45535};
   Double_t _fex1017[13] = {
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
   0,
   0};
   Double_t _fey1017[13] = {
   0.171897,
   0.1322128,
   0.1266329,
   0.1155084,
   0.1184516,
   0.1094496,
   0.1109911,
   0.1095042,
   0.1139262,
   0.1298165,
   0.1179355,
   0.1587037,
   0.2024431};
   TGraphErrors *gre = new TGraphErrors(13,_fx1017,_fy1017,_fex1017,_fey1017);
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
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,550,5950);
   Graph_Graph1017->SetMinimum(70);
   Graph_Graph1017->SetMaximum(110);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph1017->GetXaxis()->SetRange(11,92);
   Graph_Graph1017->GetXaxis()->SetNdivisions(209);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetTitle("mean (GeV)");
   Graph_Graph1017->GetYaxis()->SetNdivisions(504);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   
   TF1 *mean_func1018 = new TF1("mean_func","pol4",1000,5500);
   mean_func1018->SetBit(TF1::kNotDraw);
   mean_func1018->SetFillColor(19);
   mean_func1018->SetFillStyle(0);
   mean_func1018->SetLineColor(2);
   mean_func1018->SetLineWidth(2);
   mean_func1018->SetChisquare(45.16728);
   mean_func1018->SetNDF(8);
   mean_func1018->GetXaxis()->SetLabelFont(42);
   mean_func1018->GetXaxis()->SetLabelOffset(0.007);
   mean_func1018->GetXaxis()->SetLabelSize(0.05);
   mean_func1018->GetXaxis()->SetTitleSize(0.06);
   mean_func1018->GetXaxis()->SetTitleOffset(0.9);
   mean_func1018->GetXaxis()->SetTitleFont(42);
   mean_func1018->GetYaxis()->SetLabelFont(42);
   mean_func1018->GetYaxis()->SetLabelOffset(0.007);
   mean_func1018->GetYaxis()->SetLabelSize(0.05);
   mean_func1018->GetYaxis()->SetTitleSize(0.06);
   mean_func1018->GetYaxis()->SetTitleOffset(1.25);
   mean_func1018->GetYaxis()->SetTitleFont(42);
   mean_func1018->SetParameter(0,89.96435);
   mean_func1018->SetParError(0,1.059043);
   mean_func1018->SetParLimits(0,0,0);
   mean_func1018->SetParameter(1,-0.01456688);
   mean_func1018->SetParError(1,0.001668528);
   mean_func1018->SetParLimits(1,0,0);
   mean_func1018->SetParameter(2,7.114972e-06);
   mean_func1018->SetParError(2,9.035513e-07);
   mean_func1018->SetParLimits(2,0,0);
   mean_func1018->SetParameter(3,-1.400124e-09);
   mean_func1018->SetParError(3,2.010973e-10);
   mean_func1018->SetParLimits(3,0,0);
   mean_func1018->SetParameter(4,9.567071e-14);
   mean_func1018->SetParError(4,1.570057e-14);
   mean_func1018->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1018);
   gre->Draw("ap");
   
   Double_t _fx1019[13] = {
   1000,
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
   Double_t _fy1019[13] = {
   80.87869,
   80.12994,
   79.58493,
   78.6879,
   78.79829,
   78.43231,
   78.51322,
   78.69064,
   78.88371,
   79.16879,
   79.6315,
   78.92372,
   79.02794};
   Double_t _fex1019[13] = {
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
   0,
   0};
   Double_t _fey1019[13] = {
   0.2420723,
   0.1515996,
   0.1488555,
   0.1656604,
   0.1617059,
   0.1695564,
   0.1772637,
   0.1834934,
   0.2118585,
   0.1840392,
   0.2481135,
   0.2623852,
   0.3508483};
   gre = new TGraphErrors(13,_fx1019,_fy1019,_fex1019,_fey1019);
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
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,550,5950);
   Graph_Graph1019->SetMinimum(77.97696);
   Graph_Graph1019->SetMaximum(81.40657);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
   
   TF1 *mean_func1020 = new TF1("mean_func","pol4",1000,5500);
   mean_func1020->SetBit(TF1::kNotDraw);
   mean_func1020->SetFillColor(19);
   mean_func1020->SetFillStyle(0);
   mean_func1020->SetLineColor(2);
   mean_func1020->SetLineWidth(2);
   mean_func1020->SetChisquare(8.401725);
   mean_func1020->SetNDF(8);
   mean_func1020->GetXaxis()->SetLabelFont(42);
   mean_func1020->GetXaxis()->SetLabelOffset(0.007);
   mean_func1020->GetXaxis()->SetLabelSize(0.05);
   mean_func1020->GetXaxis()->SetTitleSize(0.06);
   mean_func1020->GetXaxis()->SetTitleOffset(0.9);
   mean_func1020->GetXaxis()->SetTitleFont(42);
   mean_func1020->GetYaxis()->SetLabelFont(42);
   mean_func1020->GetYaxis()->SetLabelOffset(0.007);
   mean_func1020->GetYaxis()->SetLabelSize(0.05);
   mean_func1020->GetYaxis()->SetTitleSize(0.06);
   mean_func1020->GetYaxis()->SetTitleOffset(1.25);
   mean_func1020->GetYaxis()->SetTitleFont(42);
   mean_func1020->SetParameter(0,89.6235);
   mean_func1020->SetParError(0,1.588806);
   mean_func1020->SetParLimits(0,0,0);
   mean_func1020->SetParameter(1,-0.01327146);
   mean_func1020->SetParError(1,0.002571386);
   mean_func1020->SetParLimits(1,0,0);
   mean_func1020->SetParameter(2,5.458952e-06);
   mean_func1020->SetParError(2,1.427755e-06);
   mean_func1020->SetParLimits(2,0,0);
   mean_func1020->SetParameter(3,-9.097198e-10);
   mean_func1020->SetParError(3,3.243059e-10);
   mean_func1020->SetParLimits(3,0,0);
   mean_func1020->SetParameter(4,5.30283e-14);
   mean_func1020->SetParError(4,2.571567e-14);
   mean_func1020->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1020);
   gre->Draw("p");
   
   Double_t _fx1021[13] = {
   1000,
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
   Double_t _fy1021[13] = {
   81.42666,
   80.4604,
   79.92141,
   79.85342,
   79.34401,
   79.70636,
   80.06163,
   80.27869,
   80.56229,
   79.78898,
   80.41483,
   79.95961,
   79.45535};
   Double_t _fex1021[13] = {
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
   0,
   0};
   Double_t _fey1021[13] = {
   0.171897,
   0.1322128,
   0.1266329,
   0.1155084,
   0.1184516,
   0.1094496,
   0.1109911,
   0.1095042,
   0.1139262,
   0.1298165,
   0.1179355,
   0.1587037,
   0.2024431};
   gre = new TGraphErrors(13,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10171021 = new TH1F("Graph_Graph_Graph10171021","",100,550,5950);
   Graph_Graph_Graph10171021->SetMinimum(70);
   Graph_Graph_Graph10171021->SetMaximum(110);
   Graph_Graph_Graph10171021->SetDirectory(0);
   Graph_Graph_Graph10171021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10171021->SetLineColor(ci);
   Graph_Graph_Graph10171021->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph_Graph10171021->GetXaxis()->SetRange(11,92);
   Graph_Graph_Graph10171021->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph10171021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10171021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10171021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10171021->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph10171021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10171021->GetYaxis()->SetTitle("mean (GeV)");
   Graph_Graph_Graph10171021->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph10171021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10171021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10171021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10171021->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph10171021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10171021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10171021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10171021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10171021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10171021);
   
   
   TF1 *mean_func1022 = new TF1("mean_func","pol4",1000,5500);
   mean_func1022->SetBit(TF1::kNotDraw);
   mean_func1022->SetFillColor(19);
   mean_func1022->SetFillStyle(0);
   mean_func1022->SetLineColor(2);
   mean_func1022->SetLineWidth(2);
   mean_func1022->SetChisquare(45.16728);
   mean_func1022->SetNDF(8);
   mean_func1022->GetXaxis()->SetLabelFont(42);
   mean_func1022->GetXaxis()->SetLabelOffset(0.007);
   mean_func1022->GetXaxis()->SetLabelSize(0.05);
   mean_func1022->GetXaxis()->SetTitleSize(0.06);
   mean_func1022->GetXaxis()->SetTitleOffset(0.9);
   mean_func1022->GetXaxis()->SetTitleFont(42);
   mean_func1022->GetYaxis()->SetLabelFont(42);
   mean_func1022->GetYaxis()->SetLabelOffset(0.007);
   mean_func1022->GetYaxis()->SetLabelSize(0.05);
   mean_func1022->GetYaxis()->SetTitleSize(0.06);
   mean_func1022->GetYaxis()->SetTitleOffset(1.25);
   mean_func1022->GetYaxis()->SetTitleFont(42);
   mean_func1022->SetParameter(0,89.96435);
   mean_func1022->SetParError(0,1.059043);
   mean_func1022->SetParLimits(0,0,0);
   mean_func1022->SetParameter(1,-0.01456688);
   mean_func1022->SetParError(1,0.001668528);
   mean_func1022->SetParLimits(1,0,0);
   mean_func1022->SetParameter(2,7.114972e-06);
   mean_func1022->SetParError(2,9.035513e-07);
   mean_func1022->SetParLimits(2,0,0);
   mean_func1022->SetParameter(3,-1.400124e-09);
   mean_func1022->SetParError(3,2.010973e-10);
   mean_func1022->SetParLimits(3,0,0);
   mean_func1022->SetParameter(4,9.567071e-14);
   mean_func1022->SetParError(4,1.570057e-14);
   mean_func1022->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1022);
   gre->Draw("p");
   
   TF1 *mean_func1023 = new TF1("mean_func","pol4",0,13000);
   mean_func1023->SetFillColor(19);
   mean_func1023->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   mean_func1023->SetMarkerColor(ci);
   mean_func1023->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   mean_func1023->SetLineColor(ci);
   mean_func1023->SetLineWidth(3);
   mean_func1023->SetChisquare(45.16728);
   mean_func1023->SetNDF(8);
   mean_func1023->GetXaxis()->SetLabelFont(42);
   mean_func1023->GetXaxis()->SetLabelOffset(0.007);
   mean_func1023->GetXaxis()->SetLabelSize(0.05);
   mean_func1023->GetXaxis()->SetTitleSize(0.06);
   mean_func1023->GetXaxis()->SetTitleOffset(0.9);
   mean_func1023->GetXaxis()->SetTitleFont(42);
   mean_func1023->GetYaxis()->SetLabelFont(42);
   mean_func1023->GetYaxis()->SetLabelOffset(0.007);
   mean_func1023->GetYaxis()->SetLabelSize(0.05);
   mean_func1023->GetYaxis()->SetTitleSize(0.06);
   mean_func1023->GetYaxis()->SetTitleOffset(1.25);
   mean_func1023->GetYaxis()->SetTitleFont(42);
   mean_func1023->SetParameter(0,89.96435);
   mean_func1023->SetParError(0,1.059043);
   mean_func1023->SetParLimits(0,0,0);
   mean_func1023->SetParameter(1,-0.01456688);
   mean_func1023->SetParError(1,0.001668528);
   mean_func1023->SetParLimits(1,0,0);
   mean_func1023->SetParameter(2,7.114972e-06);
   mean_func1023->SetParError(2,9.035513e-07);
   mean_func1023->SetParLimits(2,0,0);
   mean_func1023->SetParameter(3,-1.400124e-09);
   mean_func1023->SetParError(3,2.010973e-10);
   mean_func1023->SetParLimits(3,0,0);
   mean_func1023->SetParameter(4,9.567071e-14);
   mean_func1023->SetParError(4,1.570057e-14);
   mean_func1023->SetParLimits(4,0,0);
   mean_func1023->Draw("Csame");
   
   TF1 *mean_func1024 = new TF1("mean_func","pol4",0,13000);
   mean_func1024->SetFillColor(19);
   mean_func1024->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   mean_func1024->SetMarkerColor(ci);
   mean_func1024->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   mean_func1024->SetLineColor(ci);
   mean_func1024->SetLineWidth(3);
   mean_func1024->SetLineStyle(9);
   mean_func1024->SetChisquare(8.401725);
   mean_func1024->SetNDF(8);
   mean_func1024->GetXaxis()->SetLabelFont(42);
   mean_func1024->GetXaxis()->SetLabelOffset(0.007);
   mean_func1024->GetXaxis()->SetLabelSize(0.05);
   mean_func1024->GetXaxis()->SetTitleSize(0.06);
   mean_func1024->GetXaxis()->SetTitleOffset(0.9);
   mean_func1024->GetXaxis()->SetTitleFont(42);
   mean_func1024->GetYaxis()->SetLabelFont(42);
   mean_func1024->GetYaxis()->SetLabelOffset(0.007);
   mean_func1024->GetYaxis()->SetLabelSize(0.05);
   mean_func1024->GetYaxis()->SetTitleSize(0.06);
   mean_func1024->GetYaxis()->SetTitleOffset(1.25);
   mean_func1024->GetYaxis()->SetTitleFont(42);
   mean_func1024->SetParameter(0,89.6235);
   mean_func1024->SetParError(0,1.588806);
   mean_func1024->SetParLimits(0,0,0);
   mean_func1024->SetParameter(1,-0.01327146);
   mean_func1024->SetParError(1,0.002571386);
   mean_func1024->SetParLimits(1,0,0);
   mean_func1024->SetParameter(2,5.458952e-06);
   mean_func1024->SetParError(2,1.427755e-06);
   mean_func1024->SetParLimits(2,0,0);
   mean_func1024->SetParameter(3,-9.097198e-10);
   mean_func1024->SetParError(3,3.243059e-10);
   mean_func1024->SetParLimits(3,0,0);
   mean_func1024->SetParameter(4,5.30283e-14);
   mean_func1024->SetParError(4,2.571567e-14);
   mean_func1024->SetParLimits(4,0,0);
   mean_func1024->Draw("Csame");
   
   Double_t _fx1023[13] = {
   1000,
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
   Double_t _fy1023[13] = {
   80.91936,
   80.38983,
   80.01181,
   79.62789,
   79.48822,
   79.39487,
   79.49554,
   79.55452,
   79.69381,
   79.5789,
   79.53137,
   79.16759,
   79.96681};
   Double_t _fex1023[13] = {
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
   0,
   0};
   Double_t _fey1023[13] = {
   0.04515306,
   0.04100505,
   0.04056418,
   0.03992099,
   0.03924285,
   0.03878368,
   0.03916547,
   0.04066554,
   0.04381857,
   0.04524306,
   0.04598332,
   0.1426192,
   0.1247374};
   gre = new TGraphErrors(13,_fx1023,_fy1023,_fex1023,_fey1023);
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
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,550,5950);
   Graph_Graph1023->SetMinimum(78.83102);
   Graph_Graph1023->SetMaximum(81.15847);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
   
   TF1 *mean_func1024 = new TF1("mean_func","pol4",1000,5500);
   mean_func1024->SetBit(TF1::kNotDraw);
   mean_func1024->SetFillColor(19);
   mean_func1024->SetFillStyle(0);
   mean_func1024->SetLineColor(2);
   mean_func1024->SetLineWidth(2);
   mean_func1024->SetChisquare(14.63923);
   mean_func1024->SetNDF(8);
   mean_func1024->GetXaxis()->SetLabelFont(42);
   mean_func1024->GetXaxis()->SetLabelOffset(0.007);
   mean_func1024->GetXaxis()->SetLabelSize(0.05);
   mean_func1024->GetXaxis()->SetTitleSize(0.06);
   mean_func1024->GetXaxis()->SetTitleOffset(0.9);
   mean_func1024->GetXaxis()->SetTitleFont(42);
   mean_func1024->GetYaxis()->SetLabelFont(42);
   mean_func1024->GetYaxis()->SetLabelOffset(0.007);
   mean_func1024->GetYaxis()->SetLabelSize(0.05);
   mean_func1024->GetYaxis()->SetTitleSize(0.06);
   mean_func1024->GetYaxis()->SetTitleOffset(1.25);
   mean_func1024->GetYaxis()->SetTitleFont(42);
   mean_func1024->SetParameter(0,87.90806);
   mean_func1024->SetParError(0,0.35267);
   mean_func1024->SetParLimits(0,0,0);
   mean_func1024->SetParameter(1,-0.01135804);
   mean_func1024->SetParError(1,0.0005827059);
   mean_func1024->SetParLimits(1,0,0);
   mean_func1024->SetParameter(2,5.415345e-06);
   mean_func1024->SetParError(2,3.294068e-07);
   mean_func1024->SetParLimits(2,0,0);
   mean_func1024->SetParameter(3,-1.083828e-09);
   mean_func1024->SetParError(3,7.615592e-11);
   mean_func1024->SetParLimits(3,0,0);
   mean_func1024->SetParameter(4,7.754622e-14);
   mean_func1024->SetParError(4,6.157503e-15);
   mean_func1024->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1024);
   gre->Draw("p");
   
   Double_t _fx1025[13] = {
   1000,
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
   Double_t _fy1025[13] = {
   82.05547,
   81.36746,
   80.98614,
   80.54012,
   80.33958,
   80.44958,
   80.96947,
   81.02202,
   80.9945,
   80.95921,
   80.80544,
   80.52373,
   80.65564};
   Double_t _fex1025[13] = {
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
   0,
   0};
   Double_t _fey1025[13] = {
   0.04659167,
   0.04295231,
   0.04205729,
   0.04454748,
   0.03101451,
   0.04014764,
   0.0359653,
   0.03760819,
   0.0379275,
   0.02783328,
   0.02736565,
   0.08560054,
   0.07606843};
   gre = new TGraphErrors(13,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","",100,550,5950);
   Graph_Graph1025->SetMinimum(80.12922);
   Graph_Graph1025->SetMaximum(82.28141);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   
   TF1 *mean_func1026 = new TF1("mean_func","pol4",1000,5500);
   mean_func1026->SetBit(TF1::kNotDraw);
   mean_func1026->SetFillColor(19);
   mean_func1026->SetFillStyle(0);
   mean_func1026->SetLineColor(2);
   mean_func1026->SetLineWidth(2);
   mean_func1026->SetChisquare(117.3067);
   mean_func1026->SetNDF(8);
   mean_func1026->GetXaxis()->SetLabelFont(42);
   mean_func1026->GetXaxis()->SetLabelOffset(0.007);
   mean_func1026->GetXaxis()->SetLabelSize(0.05);
   mean_func1026->GetXaxis()->SetTitleSize(0.06);
   mean_func1026->GetXaxis()->SetTitleOffset(0.9);
   mean_func1026->GetXaxis()->SetTitleFont(42);
   mean_func1026->GetYaxis()->SetLabelFont(42);
   mean_func1026->GetYaxis()->SetLabelOffset(0.007);
   mean_func1026->GetYaxis()->SetLabelSize(0.05);
   mean_func1026->GetYaxis()->SetTitleSize(0.06);
   mean_func1026->GetYaxis()->SetTitleOffset(1.25);
   mean_func1026->GetYaxis()->SetTitleFont(42);
   mean_func1026->SetParameter(0,90.96011);
   mean_func1026->SetParError(0,0.3186794);
   mean_func1026->SetParLimits(0,0,0);
   mean_func1026->SetParameter(1,-0.01499564);
   mean_func1026->SetParError(1,0.0005099828);
   mean_func1026->SetParLimits(1,0,0);
   mean_func1026->SetParameter(2,7.494901e-06);
   mean_func1026->SetParError(2,2.792133e-07);
   mean_func1026->SetParLimits(2,0,0);
   mean_func1026->SetParameter(3,-1.527616e-09);
   mean_func1026->SetParError(3,6.25296e-11);
   mean_func1026->SetParLimits(3,0,0);
   mean_func1026->SetParameter(4,1.089595e-13);
   mean_func1026->SetParError(4,4.902226e-15);
   mean_func1026->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1026);
   gre->Draw("p");
   
   TF1 *mean_func1027 = new TF1("mean_func","pol4",0,13000);
   mean_func1027->SetFillColor(19);
   mean_func1027->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   mean_func1027->SetMarkerColor(ci);
   mean_func1027->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   mean_func1027->SetLineColor(ci);
   mean_func1027->SetLineWidth(3);
   mean_func1027->SetChisquare(117.3067);
   mean_func1027->SetNDF(8);
   mean_func1027->GetXaxis()->SetLabelFont(42);
   mean_func1027->GetXaxis()->SetLabelOffset(0.007);
   mean_func1027->GetXaxis()->SetLabelSize(0.05);
   mean_func1027->GetXaxis()->SetTitleSize(0.06);
   mean_func1027->GetXaxis()->SetTitleOffset(0.9);
   mean_func1027->GetXaxis()->SetTitleFont(42);
   mean_func1027->GetYaxis()->SetLabelFont(42);
   mean_func1027->GetYaxis()->SetLabelOffset(0.007);
   mean_func1027->GetYaxis()->SetLabelSize(0.05);
   mean_func1027->GetYaxis()->SetTitleSize(0.06);
   mean_func1027->GetYaxis()->SetTitleOffset(1.25);
   mean_func1027->GetYaxis()->SetTitleFont(42);
   mean_func1027->SetParameter(0,90.96011);
   mean_func1027->SetParError(0,0.3186794);
   mean_func1027->SetParLimits(0,0,0);
   mean_func1027->SetParameter(1,-0.01499564);
   mean_func1027->SetParError(1,0.0005099828);
   mean_func1027->SetParLimits(1,0,0);
   mean_func1027->SetParameter(2,7.494901e-06);
   mean_func1027->SetParError(2,2.792133e-07);
   mean_func1027->SetParLimits(2,0,0);
   mean_func1027->SetParameter(3,-1.527616e-09);
   mean_func1027->SetParError(3,6.25296e-11);
   mean_func1027->SetParLimits(3,0,0);
   mean_func1027->SetParameter(4,1.089595e-13);
   mean_func1027->SetParError(4,4.902226e-15);
   mean_func1027->SetParLimits(4,0,0);
   mean_func1027->Draw("Csame");
   
   TF1 *mean_func1028 = new TF1("mean_func","pol4",0,13000);
   mean_func1028->SetFillColor(19);
   mean_func1028->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   mean_func1028->SetMarkerColor(ci);
   mean_func1028->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   mean_func1028->SetLineColor(ci);
   mean_func1028->SetLineWidth(3);
   mean_func1028->SetLineStyle(9);
   mean_func1028->SetChisquare(14.63923);
   mean_func1028->SetNDF(8);
   mean_func1028->GetXaxis()->SetLabelFont(42);
   mean_func1028->GetXaxis()->SetLabelOffset(0.007);
   mean_func1028->GetXaxis()->SetLabelSize(0.05);
   mean_func1028->GetXaxis()->SetTitleSize(0.06);
   mean_func1028->GetXaxis()->SetTitleOffset(0.9);
   mean_func1028->GetXaxis()->SetTitleFont(42);
   mean_func1028->GetYaxis()->SetLabelFont(42);
   mean_func1028->GetYaxis()->SetLabelOffset(0.007);
   mean_func1028->GetYaxis()->SetLabelSize(0.05);
   mean_func1028->GetYaxis()->SetTitleSize(0.06);
   mean_func1028->GetYaxis()->SetTitleOffset(1.25);
   mean_func1028->GetYaxis()->SetTitleFont(42);
   mean_func1028->SetParameter(0,87.90806);
   mean_func1028->SetParError(0,0.35267);
   mean_func1028->SetParLimits(0,0,0);
   mean_func1028->SetParameter(1,-0.01135804);
   mean_func1028->SetParError(1,0.0005827059);
   mean_func1028->SetParLimits(1,0,0);
   mean_func1028->SetParameter(2,5.415345e-06);
   mean_func1028->SetParError(2,3.294068e-07);
   mean_func1028->SetParLimits(2,0,0);
   mean_func1028->SetParameter(3,-1.083828e-09);
   mean_func1028->SetParError(3,7.615592e-11);
   mean_func1028->SetParLimits(3,0,0);
   mean_func1028->SetParameter(4,7.754622e-14);
   mean_func1028->SetParError(4,6.157503e-15);
   mean_func1028->SetParLimits(4,0,0);
   mean_func1028->Draw("Csame");
   
   Double_t _fx1027[13] = {
   1000,
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
   Double_t _fy1027[13] = {
   85.28997,
   84.1748,
   83.8143,
   83.36696,
   83.22194,
   82.70696,
   82.89094,
   83.58722,
   83.60898,
   83.17577,
   83.33809,
   83.24955,
   82.73406};
   Double_t _fex1027[13] = {
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
   0,
   0};
   Double_t _fey1027[13] = {
   0.1438255,
   0.1481212,
   0.1379496,
   0.1458821,
   0.1525127,
   0.1487597,
   0.1540941,
   0.192242,
   0.2104315,
   0.1981286,
   0.2103334,
   0.2394224,
   0.2216726};
   gre = new TGraphErrors(13,_fx1027,_fy1027,_fex1027,_fey1027);
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
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,550,5950);
   Graph_Graph1027->SetMinimum(82.22024);
   Graph_Graph1027->SetMaximum(85.72594);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1027->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1027->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
   
   TF1 *mean_func1028 = new TF1("mean_func","pol4",1000,5500);
   mean_func1028->SetBit(TF1::kNotDraw);
   mean_func1028->SetFillColor(19);
   mean_func1028->SetFillStyle(0);
   mean_func1028->SetLineColor(2);
   mean_func1028->SetLineWidth(2);
   mean_func1028->SetChisquare(13.25172);
   mean_func1028->SetNDF(8);
   mean_func1028->GetXaxis()->SetLabelFont(42);
   mean_func1028->GetXaxis()->SetLabelOffset(0.007);
   mean_func1028->GetXaxis()->SetLabelSize(0.05);
   mean_func1028->GetXaxis()->SetTitleSize(0.06);
   mean_func1028->GetXaxis()->SetTitleOffset(0.9);
   mean_func1028->GetXaxis()->SetTitleFont(42);
   mean_func1028->GetYaxis()->SetLabelFont(42);
   mean_func1028->GetYaxis()->SetLabelOffset(0.007);
   mean_func1028->GetYaxis()->SetLabelSize(0.05);
   mean_func1028->GetYaxis()->SetTitleSize(0.06);
   mean_func1028->GetYaxis()->SetTitleOffset(1.25);
   mean_func1028->GetYaxis()->SetTitleFont(42);
   mean_func1028->SetParameter(0,94.96011);
   mean_func1028->SetParError(0,1.228902);
   mean_func1028->SetParLimits(0,0,0);
   mean_func1028->SetParameter(1,-0.01556391);
   mean_func1028->SetParError(1,0.002050698);
   mean_func1028->SetParLimits(1,0,0);
   mean_func1028->SetParameter(2,7.062255e-06);
   mean_func1028->SetParError(2,1.1602e-06);
   mean_func1028->SetParLimits(2,0,0);
   mean_func1028->SetParameter(3,-1.315922e-09);
   mean_func1028->SetParError(3,2.653384e-10);
   mean_func1028->SetParLimits(3,0,0);
   mean_func1028->SetParameter(4,8.607242e-14);
   mean_func1028->SetParError(4,2.100814e-14);
   mean_func1028->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1028);
   gre->Draw("p");
   
   Double_t _fx1029[13] = {
   1000,
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
   Double_t _fy1029[13] = {
   85.75317,
   85.01343,
   84.4118,
   83.97357,
   83.88933,
   83.7244,
   84.30406,
   84.41592,
   84.37693,
   84.5534,
   84.29096,
   83.93888,
   84.39115};
   Double_t _fex1029[13] = {
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
   0,
   0};
   Double_t _fey1029[13] = {
   0.1477322,
   0.1393122,
   0.1237962,
   0.1223086,
   0.1200145,
   0.1174417,
   0.1121714,
   0.1211657,
   0.128228,
   0.1289248,
   0.1376516,
   0.1404924,
   0.1393308};
   gre = new TGraphErrors(13,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,550,5950);
   Graph_Graph1029->SetMinimum(83.37757);
   Graph_Graph1029->SetMaximum(86.13029);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   
   TF1 *mean_func1030 = new TF1("mean_func","pol4",1000,5500);
   mean_func1030->SetBit(TF1::kNotDraw);
   mean_func1030->SetFillColor(19);
   mean_func1030->SetFillStyle(0);
   mean_func1030->SetLineColor(2);
   mean_func1030->SetLineWidth(2);
   mean_func1030->SetChisquare(9.474417);
   mean_func1030->SetNDF(8);
   mean_func1030->GetXaxis()->SetLabelFont(42);
   mean_func1030->GetXaxis()->SetLabelOffset(0.007);
   mean_func1030->GetXaxis()->SetLabelSize(0.05);
   mean_func1030->GetXaxis()->SetTitleSize(0.06);
   mean_func1030->GetXaxis()->SetTitleOffset(0.9);
   mean_func1030->GetXaxis()->SetTitleFont(42);
   mean_func1030->GetYaxis()->SetLabelFont(42);
   mean_func1030->GetYaxis()->SetLabelOffset(0.007);
   mean_func1030->GetYaxis()->SetLabelSize(0.05);
   mean_func1030->GetYaxis()->SetTitleSize(0.06);
   mean_func1030->GetYaxis()->SetTitleOffset(1.25);
   mean_func1030->GetYaxis()->SetTitleFont(42);
   mean_func1030->SetParameter(0,96.23834);
   mean_func1030->SetParError(0,1.008783);
   mean_func1030->SetParLimits(0,0,0);
   mean_func1030->SetParameter(1,-0.01750447);
   mean_func1030->SetParError(1,0.001606672);
   mean_func1030->SetParLimits(1,0,0);
   mean_func1030->SetParameter(2,8.675314e-06);
   mean_func1030->SetParError(2,8.740194e-07);
   mean_func1030->SetParLimits(2,0,0);
   mean_func1030->SetParameter(3,-1.76129e-09);
   mean_func1030->SetParError(3,1.942056e-10);
   mean_func1030->SetParLimits(3,0,0);
   mean_func1030->SetParameter(4,1.257037e-13);
   mean_func1030->SetParError(4,1.50599e-14);
   mean_func1030->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1030);
   gre->Draw("p");
   
   TF1 *mean_func1031 = new TF1("mean_func","pol4",0,13000);
   mean_func1031->SetFillColor(19);
   mean_func1031->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   mean_func1031->SetMarkerColor(ci);
   mean_func1031->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   mean_func1031->SetLineColor(ci);
   mean_func1031->SetLineWidth(3);
   mean_func1031->SetChisquare(9.474417);
   mean_func1031->SetNDF(8);
   mean_func1031->GetXaxis()->SetLabelFont(42);
   mean_func1031->GetXaxis()->SetLabelOffset(0.007);
   mean_func1031->GetXaxis()->SetLabelSize(0.05);
   mean_func1031->GetXaxis()->SetTitleSize(0.06);
   mean_func1031->GetXaxis()->SetTitleOffset(0.9);
   mean_func1031->GetXaxis()->SetTitleFont(42);
   mean_func1031->GetYaxis()->SetLabelFont(42);
   mean_func1031->GetYaxis()->SetLabelOffset(0.007);
   mean_func1031->GetYaxis()->SetLabelSize(0.05);
   mean_func1031->GetYaxis()->SetTitleSize(0.06);
   mean_func1031->GetYaxis()->SetTitleOffset(1.25);
   mean_func1031->GetYaxis()->SetTitleFont(42);
   mean_func1031->SetParameter(0,96.23834);
   mean_func1031->SetParError(0,1.008783);
   mean_func1031->SetParLimits(0,0,0);
   mean_func1031->SetParameter(1,-0.01750447);
   mean_func1031->SetParError(1,0.001606672);
   mean_func1031->SetParLimits(1,0,0);
   mean_func1031->SetParameter(2,8.675314e-06);
   mean_func1031->SetParError(2,8.740194e-07);
   mean_func1031->SetParLimits(2,0,0);
   mean_func1031->SetParameter(3,-1.76129e-09);
   mean_func1031->SetParError(3,1.942056e-10);
   mean_func1031->SetParLimits(3,0,0);
   mean_func1031->SetParameter(4,1.257037e-13);
   mean_func1031->SetParError(4,1.50599e-14);
   mean_func1031->SetParLimits(4,0,0);
   mean_func1031->Draw("Csame");
   
   TF1 *mean_func1032 = new TF1("mean_func","pol4",0,13000);
   mean_func1032->SetFillColor(19);
   mean_func1032->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   mean_func1032->SetMarkerColor(ci);
   mean_func1032->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   mean_func1032->SetLineColor(ci);
   mean_func1032->SetLineWidth(3);
   mean_func1032->SetLineStyle(9);
   mean_func1032->SetChisquare(13.25172);
   mean_func1032->SetNDF(8);
   mean_func1032->GetXaxis()->SetLabelFont(42);
   mean_func1032->GetXaxis()->SetLabelOffset(0.007);
   mean_func1032->GetXaxis()->SetLabelSize(0.05);
   mean_func1032->GetXaxis()->SetTitleSize(0.06);
   mean_func1032->GetXaxis()->SetTitleOffset(0.9);
   mean_func1032->GetXaxis()->SetTitleFont(42);
   mean_func1032->GetYaxis()->SetLabelFont(42);
   mean_func1032->GetYaxis()->SetLabelOffset(0.007);
   mean_func1032->GetYaxis()->SetLabelSize(0.05);
   mean_func1032->GetYaxis()->SetTitleSize(0.06);
   mean_func1032->GetYaxis()->SetTitleOffset(1.25);
   mean_func1032->GetYaxis()->SetTitleFont(42);
   mean_func1032->SetParameter(0,94.96011);
   mean_func1032->SetParError(0,1.228902);
   mean_func1032->SetParLimits(0,0,0);
   mean_func1032->SetParameter(1,-0.01556391);
   mean_func1032->SetParError(1,0.002050698);
   mean_func1032->SetParLimits(1,0,0);
   mean_func1032->SetParameter(2,7.062255e-06);
   mean_func1032->SetParError(2,1.1602e-06);
   mean_func1032->SetParLimits(2,0,0);
   mean_func1032->SetParameter(3,-1.315922e-09);
   mean_func1032->SetParError(3,2.653384e-10);
   mean_func1032->SetParLimits(3,0,0);
   mean_func1032->SetParameter(4,8.607242e-14);
   mean_func1032->SetParError(4,2.100814e-14);
   mean_func1032->SetParLimits(4,0,0);
   mean_func1032->Draw("Csame");
   
   Double_t _fx1031[13] = {
   1000,
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
   Double_t _fy1031[13] = {
   91.51313,
   90.59895,
   90.24378,
   89.87225,
   89.67933,
   89.5924,
   89.48529,
   89.67782,
   89.63369,
   89.50737,
   89.77872,
   89.77684,
   89.68434};
   Double_t _fex1031[13] = {
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
   0,
   0};
   Double_t _fey1031[13] = {
   0.04235008,
   0.03635741,
   0.03675601,
   0.03743788,
   0.03907898,
   0.03972932,
   0.03947633,
   0.04432091,
   0.0484819,
   0.05453764,
   0.1650883,
   0.1740835,
   0.2019353};
   gre = new TGraphErrors(13,_fx1031,_fy1031,_fex1031,_fey1031);
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
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","",100,550,5950);
   Graph_Graph1031->SetMinimum(89.23485);
   Graph_Graph1031->SetMaximum(91.76645);
   Graph_Graph1031->SetDirectory(0);
   Graph_Graph1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1031->SetLineColor(ci);
   Graph_Graph1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph1031->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1031->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph1031->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1031->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1031);
   
   
   TF1 *mean_func1032 = new TF1("mean_func","pol4",1000,5500);
   mean_func1032->SetBit(TF1::kNotDraw);
   mean_func1032->SetFillColor(19);
   mean_func1032->SetFillStyle(0);
   mean_func1032->SetLineColor(2);
   mean_func1032->SetLineWidth(2);
   mean_func1032->SetChisquare(31.53786);
   mean_func1032->SetNDF(8);
   mean_func1032->GetXaxis()->SetLabelFont(42);
   mean_func1032->GetXaxis()->SetLabelOffset(0.007);
   mean_func1032->GetXaxis()->SetLabelSize(0.05);
   mean_func1032->GetXaxis()->SetTitleSize(0.06);
   mean_func1032->GetXaxis()->SetTitleOffset(0.9);
   mean_func1032->GetXaxis()->SetTitleFont(42);
   mean_func1032->GetYaxis()->SetLabelFont(42);
   mean_func1032->GetYaxis()->SetLabelOffset(0.007);
   mean_func1032->GetYaxis()->SetLabelSize(0.05);
   mean_func1032->GetYaxis()->SetTitleSize(0.06);
   mean_func1032->GetYaxis()->SetTitleOffset(1.25);
   mean_func1032->GetYaxis()->SetTitleFont(42);
   mean_func1032->SetParameter(0,99.44177);
   mean_func1032->SetParError(0,0.3940661);
   mean_func1032->SetParLimits(0,0,0);
   mean_func1032->SetParameter(1,-0.01303085);
   mean_func1032->SetParError(1,0.0006794617);
   mean_func1032->SetParLimits(1,0,0);
   mean_func1032->SetParameter(2,6.153276e-06);
   mean_func1032->SetParError(2,4.015934e-07);
   mean_func1032->SetParLimits(2,0,0);
   mean_func1032->SetParameter(3,-1.232885e-09);
   mean_func1032->SetParError(3,9.675393e-11);
   mean_func1032->SetParLimits(3,0,0);
   mean_func1032->SetParameter(4,8.87021e-14);
   mean_func1032->SetParError(4,8.088451e-15);
   mean_func1032->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1032);
   gre->Draw("p");
   
   Double_t _fx1033[13] = {
   1000,
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
   Double_t _fy1033[13] = {
   92.69282,
   91.98921,
   91.52967,
   91.2122,
   90.9051,
   90.78248,
   91.0315,
   91.29499,
   91.38406,
   91.29518,
   91.15573,
   91.3691,
   91.11537};
   Double_t _fex1033[13] = {
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
   0,
   0};
   Double_t _fey1033[13] = {
   0.03877798,
   0.03674969,
   0.03636378,
   0.03577863,
   0.03617919,
   0.03406411,
   0.03387887,
   0.03748311,
   0.0384483,
   0.0429519,
   0.1281605,
   0.1217436,
   0.1382512};
   gre = new TGraphErrors(13,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","",100,550,5950);
   Graph_Graph1033->SetMinimum(90.55009);
   Graph_Graph1033->SetMaximum(92.92992);
   Graph_Graph1033->SetDirectory(0);
   Graph_Graph1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1033->SetLineColor(ci);
   Graph_Graph1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph1033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1033);
   
   
   TF1 *mean_func1034 = new TF1("mean_func","pol4",1000,5500);
   mean_func1034->SetBit(TF1::kNotDraw);
   mean_func1034->SetFillColor(19);
   mean_func1034->SetFillStyle(0);
   mean_func1034->SetLineColor(2);
   mean_func1034->SetLineWidth(2);
   mean_func1034->SetChisquare(31.71943);
   mean_func1034->SetNDF(8);
   mean_func1034->GetXaxis()->SetLabelFont(42);
   mean_func1034->GetXaxis()->SetLabelOffset(0.007);
   mean_func1034->GetXaxis()->SetLabelSize(0.05);
   mean_func1034->GetXaxis()->SetTitleSize(0.06);
   mean_func1034->GetXaxis()->SetTitleOffset(0.9);
   mean_func1034->GetXaxis()->SetTitleFont(42);
   mean_func1034->GetYaxis()->SetLabelFont(42);
   mean_func1034->GetYaxis()->SetLabelOffset(0.007);
   mean_func1034->GetYaxis()->SetLabelSize(0.05);
   mean_func1034->GetYaxis()->SetTitleSize(0.06);
   mean_func1034->GetYaxis()->SetTitleOffset(1.25);
   mean_func1034->GetYaxis()->SetTitleFont(42);
   mean_func1034->SetParameter(0,101.4289);
   mean_func1034->SetParError(0,0.3442149);
   mean_func1034->SetParLimits(0,0,0);
   mean_func1034->SetParameter(1,-0.01425456);
   mean_func1034->SetParError(1,0.0005860902);
   mean_func1034->SetParLimits(1,0,0);
   mean_func1034->SetParameter(2,6.793072e-06);
   mean_func1034->SetParError(2,3.414726e-07);
   mean_func1034->SetParLimits(2,0,0);
   mean_func1034->SetParameter(3,-1.337563e-09);
   mean_func1034->SetParError(3,8.108922e-11);
   mean_func1034->SetParLimits(3,0,0);
   mean_func1034->SetParameter(4,9.320501e-14);
   mean_func1034->SetParError(4,6.681349e-15);
   mean_func1034->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1034);
   gre->Draw("p");
   
   TF1 *mean_func1035 = new TF1("mean_func","pol4",0,13000);
   mean_func1035->SetFillColor(19);
   mean_func1035->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   mean_func1035->SetMarkerColor(ci);
   mean_func1035->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   mean_func1035->SetLineColor(ci);
   mean_func1035->SetLineWidth(3);
   mean_func1035->SetChisquare(31.71943);
   mean_func1035->SetNDF(8);
   mean_func1035->GetXaxis()->SetLabelFont(42);
   mean_func1035->GetXaxis()->SetLabelOffset(0.007);
   mean_func1035->GetXaxis()->SetLabelSize(0.05);
   mean_func1035->GetXaxis()->SetTitleSize(0.06);
   mean_func1035->GetXaxis()->SetTitleOffset(0.9);
   mean_func1035->GetXaxis()->SetTitleFont(42);
   mean_func1035->GetYaxis()->SetLabelFont(42);
   mean_func1035->GetYaxis()->SetLabelOffset(0.007);
   mean_func1035->GetYaxis()->SetLabelSize(0.05);
   mean_func1035->GetYaxis()->SetTitleSize(0.06);
   mean_func1035->GetYaxis()->SetTitleOffset(1.25);
   mean_func1035->GetYaxis()->SetTitleFont(42);
   mean_func1035->SetParameter(0,101.4289);
   mean_func1035->SetParError(0,0.3442149);
   mean_func1035->SetParLimits(0,0,0);
   mean_func1035->SetParameter(1,-0.01425456);
   mean_func1035->SetParError(1,0.0005860902);
   mean_func1035->SetParLimits(1,0,0);
   mean_func1035->SetParameter(2,6.793072e-06);
   mean_func1035->SetParError(2,3.414726e-07);
   mean_func1035->SetParLimits(2,0,0);
   mean_func1035->SetParameter(3,-1.337563e-09);
   mean_func1035->SetParError(3,8.108922e-11);
   mean_func1035->SetParLimits(3,0,0);
   mean_func1035->SetParameter(4,9.320501e-14);
   mean_func1035->SetParError(4,6.681349e-15);
   mean_func1035->SetParLimits(4,0,0);
   mean_func1035->Draw("Csame");
   
   TF1 *mean_func1036 = new TF1("mean_func","pol4",0,13000);
   mean_func1036->SetFillColor(19);
   mean_func1036->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   mean_func1036->SetMarkerColor(ci);
   mean_func1036->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   mean_func1036->SetLineColor(ci);
   mean_func1036->SetLineWidth(3);
   mean_func1036->SetLineStyle(9);
   mean_func1036->SetChisquare(31.53786);
   mean_func1036->SetNDF(8);
   mean_func1036->GetXaxis()->SetLabelFont(42);
   mean_func1036->GetXaxis()->SetLabelOffset(0.007);
   mean_func1036->GetXaxis()->SetLabelSize(0.05);
   mean_func1036->GetXaxis()->SetTitleSize(0.06);
   mean_func1036->GetXaxis()->SetTitleOffset(0.9);
   mean_func1036->GetXaxis()->SetTitleFont(42);
   mean_func1036->GetYaxis()->SetLabelFont(42);
   mean_func1036->GetYaxis()->SetLabelOffset(0.007);
   mean_func1036->GetYaxis()->SetLabelSize(0.05);
   mean_func1036->GetYaxis()->SetTitleSize(0.06);
   mean_func1036->GetYaxis()->SetTitleOffset(1.25);
   mean_func1036->GetYaxis()->SetTitleFont(42);
   mean_func1036->SetParameter(0,99.44177);
   mean_func1036->SetParError(0,0.3940661);
   mean_func1036->SetParLimits(0,0,0);
   mean_func1036->SetParameter(1,-0.01303085);
   mean_func1036->SetParError(1,0.0006794617);
   mean_func1036->SetParLimits(1,0,0);
   mean_func1036->SetParameter(2,6.153276e-06);
   mean_func1036->SetParError(2,4.015934e-07);
   mean_func1036->SetParLimits(2,0,0);
   mean_func1036->SetParameter(3,-1.232885e-09);
   mean_func1036->SetParError(3,9.675393e-11);
   mean_func1036->SetParLimits(3,0,0);
   mean_func1036->SetParameter(4,8.87021e-14);
   mean_func1036->SetParError(4,8.088451e-15);
   mean_func1036->SetParLimits(4,0,0);
   mean_func1036->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("mean_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("mean_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("mean_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("mean_func","G_{B}#rightarrow ZZ","L");

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

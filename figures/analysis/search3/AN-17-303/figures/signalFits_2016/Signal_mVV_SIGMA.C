void Signal_mVV_SIGMA()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 14:34:02 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(390,-40.46056,5806.667,438.3009);
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
   
   TF1 *pol41010 = new TF1("pol4","pol4",0,13000);
   pol41010->SetBit(TF1::kNotDraw);
   pol41010->SetFillColor(19);
   pol41010->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   pol41010->SetMarkerColor(ci);
   pol41010->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol41010->SetLineColor(ci);
   pol41010->SetLineWidth(3);
   pol41010->SetChisquare(343.4076);
   pol41010->SetNDF(7);
   pol41010->GetXaxis()->SetTitle("M_{X} (GeV)");
   pol41010->GetXaxis()->SetRange(9,43);
   pol41010->GetXaxis()->SetNdivisions(209);
   pol41010->GetXaxis()->SetLabelFont(42);
   pol41010->GetXaxis()->SetLabelOffset(0.007);
   pol41010->GetXaxis()->SetLabelSize(0.05);
   pol41010->GetXaxis()->SetTitleSize(0.06);
   pol41010->GetXaxis()->SetTitleOffset(0.94);
   pol41010->GetXaxis()->SetTitleFont(42);
   pol41010->GetYaxis()->SetTitle("SIGMA (GeV)");
   pol41010->GetYaxis()->SetNdivisions(504);
   pol41010->GetYaxis()->SetLabelFont(42);
   pol41010->GetYaxis()->SetLabelOffset(0.007);
   pol41010->GetYaxis()->SetLabelSize(0.05);
   pol41010->GetYaxis()->SetTitleSize(0.06);
   pol41010->GetYaxis()->SetTitleOffset(0.97);
   pol41010->GetYaxis()->SetTitleFont(42);
   pol41010->SetParameter(0,-4.692071);
   pol41010->SetParError(0,10.91302);
   pol41010->SetParLimits(0,0,0);
   pol41010->SetParameter(1,0.06297047);
   pol41010->SetParError(1,0.01738105);
   pol41010->SetParLimits(1,0,0);
   pol41010->SetParameter(2,-1.940303e-05);
   pol41010->SetParError(2,9.49532e-06);
   pol41010->SetParLimits(2,0,0);
   pol41010->SetParameter(3,3.972315e-09);
   pol41010->SetParError(3,2.12363e-09);
   pol41010->SetParLimits(3,0,0);
   pol41010->SetParameter(4,-2.587908e-13);
   pol41010->SetParError(4,1.659213e-13);
   pol41010->SetParLimits(4,0,0);
   pol41010->Draw("C");
   
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
   45.81465,
   61.19447,
   55.48753,
   73.30774,
   65.00748,
   76.40642,
   100.6914,
   110.878,
   128.1534,
   140.3027,
   152.3074,
   182.8453};
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
   0.6467694,
   0.6636367,
   1.021141,
   0.8713637,
   0.9129951,
   1.047273,
   1.094607,
   1.344843,
   1.377216,
   1.495749,
   1.76769,
   1.815939};
   TGraphErrors *gre = new TGraphErrors(12,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,770,5930);
   Graph_Graph1009->SetMinimum(31.21854);
   Graph_Graph1009->SetMaximum(198.6106);
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
   pol41010->SetChisquare(343.4076);
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
   pol41010->SetParameter(0,-4.692071);
   pol41010->SetParError(0,10.91302);
   pol41010->SetParLimits(0,0,0);
   pol41010->SetParameter(1,0.06297047);
   pol41010->SetParError(1,0.01738105);
   pol41010->SetParLimits(1,0,0);
   pol41010->SetParameter(2,-1.940303e-05);
   pol41010->SetParError(2,9.49532e-06);
   pol41010->SetParLimits(2,0,0);
   pol41010->SetParameter(3,3.972315e-09);
   pol41010->SetParError(3,2.12363e-09);
   pol41010->SetParLimits(3,0,0);
   pol41010->SetParameter(4,-2.587908e-13);
   pol41010->SetParError(4,1.659213e-13);
   pol41010->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41010);
   gre->Draw("p");
   
   TF1 *pol41011 = new TF1("pol4","pol4",0,13000);
   pol41011->SetBit(TF1::kNotDraw);
   pol41011->SetFillColor(19);
   pol41011->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol41011->SetMarkerColor(ci);
   pol41011->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol41011->SetLineColor(ci);
   pol41011->SetLineWidth(3);
   pol41011->SetChisquare(343.4076);
   pol41011->SetNDF(7);
   pol41011->GetXaxis()->SetTitle("M_{X} (GeV)");
   pol41011->GetXaxis()->SetRange(9,43);
   pol41011->GetXaxis()->SetNdivisions(209);
   pol41011->GetXaxis()->SetLabelFont(42);
   pol41011->GetXaxis()->SetLabelOffset(0.007);
   pol41011->GetXaxis()->SetLabelSize(0.05);
   pol41011->GetXaxis()->SetTitleSize(0.06);
   pol41011->GetXaxis()->SetTitleOffset(0.94);
   pol41011->GetXaxis()->SetTitleFont(42);
   pol41011->GetYaxis()->SetTitle("SIGMA (GeV)");
   pol41011->GetYaxis()->SetNdivisions(504);
   pol41011->GetYaxis()->SetLabelFont(42);
   pol41011->GetYaxis()->SetLabelOffset(0.007);
   pol41011->GetYaxis()->SetLabelSize(0.05);
   pol41011->GetYaxis()->SetTitleSize(0.06);
   pol41011->GetYaxis()->SetTitleOffset(0.97);
   pol41011->GetYaxis()->SetTitleFont(42);
   pol41011->SetParameter(0,-4.692071);
   pol41011->SetParError(0,10.91302);
   pol41011->SetParLimits(0,0,0);
   pol41011->SetParameter(1,0.06297047);
   pol41011->SetParError(1,0.01738105);
   pol41011->SetParLimits(1,0,0);
   pol41011->SetParameter(2,-1.940303e-05);
   pol41011->SetParError(2,9.49532e-06);
   pol41011->SetParLimits(2,0,0);
   pol41011->SetParameter(3,3.972315e-09);
   pol41011->SetParError(3,2.12363e-09);
   pol41011->SetParLimits(3,0,0);
   pol41011->SetParameter(4,-2.587908e-13);
   pol41011->SetParError(4,1.659213e-13);
   pol41011->SetParLimits(4,0,0);
   pol41011->Draw("Csame");
   
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
   48.54326,
   63.18077,
   56.86116,
   74.93597,
   66.30953,
   77.59555,
   106.1648,
   100.2343,
   129.5928,
   144.4217,
   136.861,
   185.1697};
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
   0.7200774,
   0.6902228,
   0.986062,
   0.8373629,
   0.8806191,
   1.02551,
   1.127154,
   1.333846,
   1.345071,
   1.489624,
   1.944071,
   1.767395};
   gre = new TGraphErrors(12,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,770,5930);
   Graph_Graph1011->SetMinimum(33.91179);
   Graph_Graph1011->SetMaximum(200.8485);
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
   pol41012->SetChisquare(576.6377);
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
   pol41012->SetParameter(0,18.83241);
   pol41012->SetParError(0,11.25341);
   pol41012->SetParLimits(0,0,0);
   pol41012->SetParameter(1,0.02969894);
   pol41012->SetParError(1,0.01781902);
   pol41012->SetParLimits(1,0,0);
   pol41012->SetParameter(2,-1.362888e-06);
   pol41012->SetParError(2,9.706656e-06);
   pol41012->SetParLimits(2,0,0);
   pol41012->SetParameter(3,-1.953217e-10);
   pol41012->SetParError(3,2.166244e-09);
   pol41012->SetParLimits(3,0,0);
   pol41012->SetParameter(4,7.713491e-14);
   pol41012->SetParError(4,1.688542e-13);
   pol41012->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41012);
   gre->Draw("p");
   
   TF1 *pol41013 = new TF1("pol4","pol4",0,13000);
   pol41013->SetBit(TF1::kNotDraw);
   pol41013->SetFillColor(19);
   pol41013->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol41013->SetMarkerColor(ci);
   pol41013->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol41013->SetLineColor(ci);
   pol41013->SetLineWidth(3);
   pol41013->SetChisquare(576.6377);
   pol41013->SetNDF(7);
   pol41013->GetXaxis()->SetLabelFont(42);
   pol41013->GetXaxis()->SetLabelOffset(0.007);
   pol41013->GetXaxis()->SetLabelSize(0.05);
   pol41013->GetXaxis()->SetTitleSize(0.06);
   pol41013->GetXaxis()->SetTitleOffset(0.9);
   pol41013->GetXaxis()->SetTitleFont(42);
   pol41013->GetYaxis()->SetLabelFont(42);
   pol41013->GetYaxis()->SetLabelOffset(0.007);
   pol41013->GetYaxis()->SetLabelSize(0.05);
   pol41013->GetYaxis()->SetTitleSize(0.06);
   pol41013->GetYaxis()->SetTitleOffset(1.25);
   pol41013->GetYaxis()->SetTitleFont(42);
   pol41013->SetParameter(0,18.83241);
   pol41013->SetParError(0,11.25341);
   pol41013->SetParLimits(0,0,0);
   pol41013->SetParameter(1,0.02969894);
   pol41013->SetParError(1,0.01781902);
   pol41013->SetParLimits(1,0,0);
   pol41013->SetParameter(2,-1.362888e-06);
   pol41013->SetParError(2,9.706656e-06);
   pol41013->SetParLimits(2,0,0);
   pol41013->SetParameter(3,-1.953217e-10);
   pol41013->SetParError(3,2.166244e-09);
   pol41013->SetParLimits(3,0,0);
   pol41013->SetParameter(4,7.713491e-14);
   pol41013->SetParError(4,1.688542e-13);
   pol41013->SetParLimits(4,0,0);
   pol41013->Draw("Csame");
   
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
   45.6655,
   62.81476,
   66.5341,
   78.06555,
   65.72377,
   78.12311,
   105.0073,
   101.1061,
   130.4411,
   90,
   153.4687,
   183.2608};
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
   0.4316139,
   0.4662989,
   0.4805809,
   0.4997443,
   0.6127602,
   0.7513887,
   0.7993222,
   0.9782193,
   0.9635845,
   0.02476035,
   1.47765,
   1.989768};
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
   Graph_Graph1013->SetMinimum(31.23222);
   Graph_Graph1013->SetMaximum(199.2522);
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
   pol41014->SetChisquare(4025.265);
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
   pol41014->SetParameter(0,124.6621);
   pol41014->SetParError(0,6.745104);
   pol41014->SetParLimits(0,0,0);
   pol41014->SetParameter(1,-0.1893341);
   pol41014->SetParError(1,0.01061838);
   pol41014->SetParLimits(1,0,0);
   pol41014->SetParameter(2,0.0001512251);
   pol41014->SetParError(2,5.741792e-06);
   pol41014->SetParLimits(2,0,0);
   pol41014->SetParameter(3,-4.15689e-08);
   pol41014->SetParError(3,1.269646e-09);
   pol41014->SetParLimits(3,0,0);
   pol41014->SetParameter(4,3.76292e-12);
   pol41014->SetParError(4,9.889034e-14);
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
   pol41015->SetChisquare(4025.265);
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
   pol41015->SetParameter(0,124.6621);
   pol41015->SetParError(0,6.745104);
   pol41015->SetParLimits(0,0,0);
   pol41015->SetParameter(1,-0.1893341);
   pol41015->SetParError(1,0.01061838);
   pol41015->SetParLimits(1,0,0);
   pol41015->SetParameter(2,0.0001512251);
   pol41015->SetParError(2,5.741792e-06);
   pol41015->SetParLimits(2,0,0);
   pol41015->SetParameter(3,-4.15689e-08);
   pol41015->SetParError(3,1.269646e-09);
   pol41015->SetParLimits(3,0,0);
   pol41015->SetParameter(4,3.76292e-12);
   pol41015->SetParError(4,9.889034e-14);
   pol41015->SetParLimits(4,0,0);
   pol41015->Draw("Csame");
   
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
   48.81092,
   67.20713,
   60.70945,
   79.34171,
   69.55243,
   81.03159,
   110.9947,
   106.5563,
   140.0533,
   152.8126,
   144.8457,
   143.6652};
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
   0.6805736,
   0.5154124,
   0.702619,
   0.6297203,
   0.6694143,
   0.7754918,
   0.8502431,
   1.065413,
   1.066997,
   1.153185,
   1.640301,
   1.510401};
   gre = new TGraphErrors(12,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,770,5930);
   Graph_Graph1015->SetMinimum(37.5468);
   Graph_Graph1015->SetMaximum(164.5493);
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
   pol41016->SetChisquare(897.9454);
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
   pol41016->SetParameter(0,-58.41025);
   pol41016->SetParError(0,9.303611);
   pol41016->SetParLimits(0,0,0);
   pol41016->SetParameter(1,0.1721001);
   pol41016->SetParError(1,0.01453733);
   pol41016->SetParLimits(1,0,0);
   pol41016->SetParameter(2,-8.896566e-05);
   pol41016->SetParError(2,7.855425e-06);
   pol41016->SetParLimits(2,0,0);
   pol41016->SetParameter(3,2.206833e-08);
   pol41016->SetParError(3,1.745567e-09);
   pol41016->SetParLimits(3,0,0);
   pol41016->SetParameter(4,-1.888998e-12);
   pol41016->SetParError(4,1.358213e-13);
   pol41016->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41016);
   gre->Draw("p");
   
   TF1 *pol41017 = new TF1("pol4","pol4",0,13000);
   pol41017->SetBit(TF1::kNotDraw);
   pol41017->SetFillColor(19);
   pol41017->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol41017->SetMarkerColor(ci);
   pol41017->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol41017->SetLineColor(ci);
   pol41017->SetLineWidth(3);
   pol41017->SetChisquare(897.9454);
   pol41017->SetNDF(7);
   pol41017->GetXaxis()->SetLabelFont(42);
   pol41017->GetXaxis()->SetLabelOffset(0.007);
   pol41017->GetXaxis()->SetLabelSize(0.05);
   pol41017->GetXaxis()->SetTitleSize(0.06);
   pol41017->GetXaxis()->SetTitleOffset(0.9);
   pol41017->GetXaxis()->SetTitleFont(42);
   pol41017->GetYaxis()->SetLabelFont(42);
   pol41017->GetYaxis()->SetLabelOffset(0.007);
   pol41017->GetYaxis()->SetLabelSize(0.05);
   pol41017->GetYaxis()->SetTitleSize(0.06);
   pol41017->GetYaxis()->SetTitleOffset(1.25);
   pol41017->GetYaxis()->SetTitleFont(42);
   pol41017->SetParameter(0,-58.41025);
   pol41017->SetParError(0,9.303611);
   pol41017->SetParLimits(0,0,0);
   pol41017->SetParameter(1,0.1721001);
   pol41017->SetParError(1,0.01453733);
   pol41017->SetParLimits(1,0,0);
   pol41017->SetParameter(2,-8.896566e-05);
   pol41017->SetParError(2,7.855425e-06);
   pol41017->SetParLimits(2,0,0);
   pol41017->SetParameter(3,2.206833e-08);
   pol41017->SetParError(3,1.745567e-09);
   pol41017->SetParLimits(3,0,0);
   pol41017->SetParameter(4,-1.888998e-12);
   pol41017->SetParError(4,1.358213e-13);
   pol41017->SetParLimits(4,0,0);
   pol41017->Draw("Csame");
   
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

void Signal_mVV_SIGMA()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:19:34 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(390,-74.2268,5806.667,441.2371);
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
   
   TF1 *SIGMA_func1242 = new TF1("SIGMA_func","pol6",0,13000);
   SIGMA_func1242->SetFillColor(19);
   SIGMA_func1242->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   SIGMA_func1242->SetMarkerColor(ci);
   SIGMA_func1242->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   SIGMA_func1242->SetLineColor(ci);
   SIGMA_func1242->SetLineWidth(3);
   SIGMA_func1242->SetChisquare(24.76099);
   SIGMA_func1242->SetNDF(6);
   SIGMA_func1242->GetXaxis()->SetTitle("M_{VV} (GeV)");
   SIGMA_func1242->GetXaxis()->SetRange(9,43);
   SIGMA_func1242->GetXaxis()->SetNdivisions(209);
   SIGMA_func1242->GetXaxis()->SetLabelFont(42);
   SIGMA_func1242->GetXaxis()->SetLabelOffset(0.007);
   SIGMA_func1242->GetXaxis()->SetLabelSize(0.05);
   SIGMA_func1242->GetXaxis()->SetTitleSize(0.06);
   SIGMA_func1242->GetXaxis()->SetTitleOffset(0.94);
   SIGMA_func1242->GetXaxis()->SetTitleFont(42);
   SIGMA_func1242->GetYaxis()->SetTitle("SIGMA (GeV)");
   SIGMA_func1242->GetYaxis()->SetNdivisions(504);
   SIGMA_func1242->GetYaxis()->SetLabelFont(42);
   SIGMA_func1242->GetYaxis()->SetLabelOffset(0.007);
   SIGMA_func1242->GetYaxis()->SetLabelSize(0.05);
   SIGMA_func1242->GetYaxis()->SetTitleSize(0.06);
   SIGMA_func1242->GetYaxis()->SetTitleOffset(0.97);
   SIGMA_func1242->GetYaxis()->SetTitleFont(42);
   SIGMA_func1242->SetParameter(0,44.151);
   SIGMA_func1242->SetParError(0,56.16837);
   SIGMA_func1242->SetParLimits(0,0,0);
   SIGMA_func1242->SetParameter(1,-0.03886282);
   SIGMA_func1242->SetParError(1,0.1467146);
   SIGMA_func1242->SetParLimits(1,0,0);
   SIGMA_func1242->SetParameter(2,9.164826e-05);
   SIGMA_func1242->SetParError(2,0.0001482893);
   SIGMA_func1242->SetParLimits(2,0,0);
   SIGMA_func1242->SetParameter(3,-4.826616e-08);
   SIGMA_func1242->SetParError(3,7.465502e-08);
   SIGMA_func1242->SetParLimits(3,0,0);
   SIGMA_func1242->SetParameter(4,1.248576e-11);
   SIGMA_func1242->SetParError(4,1.987327e-11);
   SIGMA_func1242->SetParLimits(4,0,0);
   SIGMA_func1242->SetParameter(5,-1.548126e-15);
   SIGMA_func1242->SetParError(5,2.669566e-15);
   SIGMA_func1242->SetParLimits(5,0,0);
   SIGMA_func1242->SetParameter(6,7.21348e-20);
   SIGMA_func1242->SetParError(6,1.42237e-19);
   SIGMA_func1242->SetParLimits(6,0,0);
   SIGMA_func1242->Draw("C");
   
   Double_t _fx1241[13] = {
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
   Double_t _fy1241[13] = {
   60.13874,
   66.92891,
   75.67633,
   89.83436,
   92.52528,
   100.7814,
   118.8407,
   138.7789,
   153.6464,
   172.4154,
   189.0116,
   200.921,
   202.8537};
   Double_t _fex1241[13] = {
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
   Double_t _fey1241[13] = {
   0.811969,
   0.9984884,
   1.100789,
   1.03753,
   1.053977,
   1.145113,
   1.384742,
   1.448727,
   1.712005,
   1.874483,
   2.016032,
   2.30012,
   2.689009};
   TGraphErrors *gre = new TGraphErrors(13,_fx1241,_fy1241,_fex1241,_fey1241);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1241 = new TH1F("Graph_Graph1241","",100,550,5950);
   Graph_Graph1241->SetMinimum(44.70518);
   Graph_Graph1241->SetMaximum(220.1643);
   Graph_Graph1241->SetDirectory(0);
   Graph_Graph1241->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1241->SetLineColor(ci);
   Graph_Graph1241->GetXaxis()->SetLabelFont(42);
   Graph_Graph1241->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1241->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1241->GetXaxis()->SetTitleFont(42);
   Graph_Graph1241->GetYaxis()->SetLabelFont(42);
   Graph_Graph1241->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1241->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1241->GetYaxis()->SetTitleFont(42);
   Graph_Graph1241->GetZaxis()->SetLabelFont(42);
   Graph_Graph1241->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1241->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1241->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1241);
   
   
   TF1 *SIGMA_func1242 = new TF1("SIGMA_func","pol6",1000,5500);
   SIGMA_func1242->SetBit(TF1::kNotDraw);
   SIGMA_func1242->SetFillColor(19);
   SIGMA_func1242->SetFillStyle(0);
   SIGMA_func1242->SetLineColor(2);
   SIGMA_func1242->SetLineWidth(2);
   SIGMA_func1242->SetChisquare(24.76099);
   SIGMA_func1242->SetNDF(6);
   SIGMA_func1242->GetXaxis()->SetLabelFont(42);
   SIGMA_func1242->GetXaxis()->SetLabelOffset(0.007);
   SIGMA_func1242->GetXaxis()->SetLabelSize(0.05);
   SIGMA_func1242->GetXaxis()->SetTitleSize(0.06);
   SIGMA_func1242->GetXaxis()->SetTitleOffset(0.9);
   SIGMA_func1242->GetXaxis()->SetTitleFont(42);
   SIGMA_func1242->GetYaxis()->SetLabelFont(42);
   SIGMA_func1242->GetYaxis()->SetLabelOffset(0.007);
   SIGMA_func1242->GetYaxis()->SetLabelSize(0.05);
   SIGMA_func1242->GetYaxis()->SetTitleSize(0.06);
   SIGMA_func1242->GetYaxis()->SetTitleOffset(1.25);
   SIGMA_func1242->GetYaxis()->SetTitleFont(42);
   SIGMA_func1242->SetParameter(0,44.151);
   SIGMA_func1242->SetParError(0,56.16837);
   SIGMA_func1242->SetParLimits(0,0,0);
   SIGMA_func1242->SetParameter(1,-0.03886282);
   SIGMA_func1242->SetParError(1,0.1467146);
   SIGMA_func1242->SetParLimits(1,0,0);
   SIGMA_func1242->SetParameter(2,9.164826e-05);
   SIGMA_func1242->SetParError(2,0.0001482893);
   SIGMA_func1242->SetParLimits(2,0,0);
   SIGMA_func1242->SetParameter(3,-4.826616e-08);
   SIGMA_func1242->SetParError(3,7.465502e-08);
   SIGMA_func1242->SetParLimits(3,0,0);
   SIGMA_func1242->SetParameter(4,1.248576e-11);
   SIGMA_func1242->SetParError(4,1.987327e-11);
   SIGMA_func1242->SetParLimits(4,0,0);
   SIGMA_func1242->SetParameter(5,-1.548126e-15);
   SIGMA_func1242->SetParError(5,2.669566e-15);
   SIGMA_func1242->SetParLimits(5,0,0);
   SIGMA_func1242->SetParameter(6,7.21348e-20);
   SIGMA_func1242->SetParError(6,1.42237e-19);
   SIGMA_func1242->SetParLimits(6,0,0);
   gre->GetListOfFunctions()->Add(SIGMA_func1242);
   gre->Draw("p");
   
   TF1 *SIGMA_func1243 = new TF1("SIGMA_func","pol6",0,13000);
   SIGMA_func1243->SetFillColor(19);
   SIGMA_func1243->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   SIGMA_func1243->SetMarkerColor(ci);
   SIGMA_func1243->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   SIGMA_func1243->SetLineColor(ci);
   SIGMA_func1243->SetLineWidth(3);
   SIGMA_func1243->SetChisquare(24.76099);
   SIGMA_func1243->SetNDF(6);
   SIGMA_func1243->GetXaxis()->SetTitle("M_{VV} (GeV)");
   SIGMA_func1243->GetXaxis()->SetRange(9,43);
   SIGMA_func1243->GetXaxis()->SetNdivisions(209);
   SIGMA_func1243->GetXaxis()->SetLabelFont(42);
   SIGMA_func1243->GetXaxis()->SetLabelOffset(0.007);
   SIGMA_func1243->GetXaxis()->SetLabelSize(0.05);
   SIGMA_func1243->GetXaxis()->SetTitleSize(0.06);
   SIGMA_func1243->GetXaxis()->SetTitleOffset(0.94);
   SIGMA_func1243->GetXaxis()->SetTitleFont(42);
   SIGMA_func1243->GetYaxis()->SetTitle("SIGMA (GeV)");
   SIGMA_func1243->GetYaxis()->SetNdivisions(504);
   SIGMA_func1243->GetYaxis()->SetLabelFont(42);
   SIGMA_func1243->GetYaxis()->SetLabelOffset(0.007);
   SIGMA_func1243->GetYaxis()->SetLabelSize(0.05);
   SIGMA_func1243->GetYaxis()->SetTitleSize(0.06);
   SIGMA_func1243->GetYaxis()->SetTitleOffset(0.97);
   SIGMA_func1243->GetYaxis()->SetTitleFont(42);
   SIGMA_func1243->SetParameter(0,44.151);
   SIGMA_func1243->SetParError(0,56.16837);
   SIGMA_func1243->SetParLimits(0,0,0);
   SIGMA_func1243->SetParameter(1,-0.03886282);
   SIGMA_func1243->SetParError(1,0.1467146);
   SIGMA_func1243->SetParLimits(1,0,0);
   SIGMA_func1243->SetParameter(2,9.164826e-05);
   SIGMA_func1243->SetParError(2,0.0001482893);
   SIGMA_func1243->SetParLimits(2,0,0);
   SIGMA_func1243->SetParameter(3,-4.826616e-08);
   SIGMA_func1243->SetParError(3,7.465502e-08);
   SIGMA_func1243->SetParLimits(3,0,0);
   SIGMA_func1243->SetParameter(4,1.248576e-11);
   SIGMA_func1243->SetParError(4,1.987327e-11);
   SIGMA_func1243->SetParLimits(4,0,0);
   SIGMA_func1243->SetParameter(5,-1.548126e-15);
   SIGMA_func1243->SetParError(5,2.669566e-15);
   SIGMA_func1243->SetParLimits(5,0,0);
   SIGMA_func1243->SetParameter(6,7.21348e-20);
   SIGMA_func1243->SetParError(6,1.42237e-19);
   SIGMA_func1243->SetParLimits(6,0,0);
   SIGMA_func1243->Draw("Csame");
   
   Double_t _fx1243[12] = {
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
   5500};
   Double_t _fy1243[12] = {
   62.53017,
   68.20679,
   75.95689,
   91.53233,
   95.65635,
   104.3906,
   120.4588,
   143.1254,
   151.5472,
   175.9736,
   190.7537,
   208.1026};
   Double_t _fex1243[12] = {
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
   Double_t _fey1243[12] = {
   0.2853871,
   0.3223096,
   0.3495307,
   0.3402458,
   0.3413137,
   0.3727112,
   0.4327888,
   0.4701165,
   0.5538241,
   0.5820498,
   0.6251546,
   2.517745};
   gre = new TGraphErrors(12,_fx1243,_fy1243,_fex1243,_fey1243);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1243 = new TH1F("Graph_Graph1243","",100,550,5950);
   Graph_Graph1243->SetMinimum(47.40723);
   Graph_Graph1243->SetMaximum(225.4579);
   Graph_Graph1243->SetDirectory(0);
   Graph_Graph1243->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1243->SetLineColor(ci);
   Graph_Graph1243->GetXaxis()->SetLabelFont(42);
   Graph_Graph1243->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1243->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1243->GetXaxis()->SetTitleFont(42);
   Graph_Graph1243->GetYaxis()->SetLabelFont(42);
   Graph_Graph1243->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1243->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1243->GetYaxis()->SetTitleFont(42);
   Graph_Graph1243->GetZaxis()->SetLabelFont(42);
   Graph_Graph1243->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1243->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1243->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1243);
   
   
   TF1 *SIGMA_func1244 = new TF1("SIGMA_func","pol6",1000,5500);
   SIGMA_func1244->SetBit(TF1::kNotDraw);
   SIGMA_func1244->SetFillColor(19);
   SIGMA_func1244->SetFillStyle(0);
   SIGMA_func1244->SetLineColor(2);
   SIGMA_func1244->SetLineWidth(2);
   SIGMA_func1244->SetChisquare(385.0286);
   SIGMA_func1244->SetNDF(5);
   SIGMA_func1244->GetXaxis()->SetLabelFont(42);
   SIGMA_func1244->GetXaxis()->SetLabelOffset(0.007);
   SIGMA_func1244->GetXaxis()->SetLabelSize(0.05);
   SIGMA_func1244->GetXaxis()->SetTitleSize(0.06);
   SIGMA_func1244->GetXaxis()->SetTitleOffset(0.9);
   SIGMA_func1244->GetXaxis()->SetTitleFont(42);
   SIGMA_func1244->GetYaxis()->SetLabelFont(42);
   SIGMA_func1244->GetYaxis()->SetLabelOffset(0.007);
   SIGMA_func1244->GetYaxis()->SetLabelSize(0.05);
   SIGMA_func1244->GetYaxis()->SetTitleSize(0.06);
   SIGMA_func1244->GetYaxis()->SetTitleOffset(1.25);
   SIGMA_func1244->GetYaxis()->SetTitleFont(42);
   SIGMA_func1244->SetParameter(0,173.3609);
   SIGMA_func1244->SetParError(0,22.25312);
   SIGMA_func1244->SetParLimits(0,0,0);
   SIGMA_func1244->SetParameter(1,-0.3683903);
   SIGMA_func1244->SetParError(1,0.05960193);
   SIGMA_func1244->SetParLimits(1,0,0);
   SIGMA_func1244->SetParameter(2,0.0004177601);
   SIGMA_func1244->SetParError(2,6.210828e-05);
   SIGMA_func1244->SetParLimits(2,0,0);
   SIGMA_func1244->SetParameter(3,-2.075703e-07);
   SIGMA_func1244->SetParError(3,3.235664e-08);
   SIGMA_func1244->SetParLimits(3,0,0);
   SIGMA_func1244->SetParameter(4,5.349441e-11);
   SIGMA_func1244->SetParError(4,8.928344e-12);
   SIGMA_func1244->SetParLimits(4,0,0);
   SIGMA_func1244->SetParameter(5,-6.879715e-15);
   SIGMA_func1244->SetParError(5,1.243039e-15);
   SIGMA_func1244->SetParLimits(5,0,0);
   SIGMA_func1244->SetParameter(6,3.479724e-19);
   SIGMA_func1244->SetParError(6,6.852607e-20);
   SIGMA_func1244->SetParLimits(6,0,0);
   gre->GetListOfFunctions()->Add(SIGMA_func1244);
   gre->Draw("p");
   
   TF1 *SIGMA_func1245 = new TF1("SIGMA_func","pol6",0,13000);
   SIGMA_func1245->SetFillColor(19);
   SIGMA_func1245->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   SIGMA_func1245->SetMarkerColor(ci);
   SIGMA_func1245->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   SIGMA_func1245->SetLineColor(ci);
   SIGMA_func1245->SetLineWidth(3);
   SIGMA_func1245->SetChisquare(385.0286);
   SIGMA_func1245->SetNDF(5);
   SIGMA_func1245->GetXaxis()->SetLabelFont(42);
   SIGMA_func1245->GetXaxis()->SetLabelOffset(0.007);
   SIGMA_func1245->GetXaxis()->SetLabelSize(0.05);
   SIGMA_func1245->GetXaxis()->SetTitleSize(0.06);
   SIGMA_func1245->GetXaxis()->SetTitleOffset(0.9);
   SIGMA_func1245->GetXaxis()->SetTitleFont(42);
   SIGMA_func1245->GetYaxis()->SetLabelFont(42);
   SIGMA_func1245->GetYaxis()->SetLabelOffset(0.007);
   SIGMA_func1245->GetYaxis()->SetLabelSize(0.05);
   SIGMA_func1245->GetYaxis()->SetTitleSize(0.06);
   SIGMA_func1245->GetYaxis()->SetTitleOffset(1.25);
   SIGMA_func1245->GetYaxis()->SetTitleFont(42);
   SIGMA_func1245->SetParameter(0,173.3609);
   SIGMA_func1245->SetParError(0,22.25312);
   SIGMA_func1245->SetParLimits(0,0,0);
   SIGMA_func1245->SetParameter(1,-0.3683903);
   SIGMA_func1245->SetParError(1,0.05960193);
   SIGMA_func1245->SetParLimits(1,0,0);
   SIGMA_func1245->SetParameter(2,0.0004177601);
   SIGMA_func1245->SetParError(2,6.210828e-05);
   SIGMA_func1245->SetParLimits(2,0,0);
   SIGMA_func1245->SetParameter(3,-2.075703e-07);
   SIGMA_func1245->SetParError(3,3.235664e-08);
   SIGMA_func1245->SetParLimits(3,0,0);
   SIGMA_func1245->SetParameter(4,5.349441e-11);
   SIGMA_func1245->SetParError(4,8.928344e-12);
   SIGMA_func1245->SetParLimits(4,0,0);
   SIGMA_func1245->SetParameter(5,-6.879715e-15);
   SIGMA_func1245->SetParError(5,1.243039e-15);
   SIGMA_func1245->SetParLimits(5,0,0);
   SIGMA_func1245->SetParameter(6,3.479724e-19);
   SIGMA_func1245->SetParError(6,6.852607e-20);
   SIGMA_func1245->SetParLimits(6,0,0);
   SIGMA_func1245->Draw("Csame");
   
   Double_t _fx1245[13] = {
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
   Double_t _fy1245[13] = {
   62.74771,
   67.99617,
   76.92645,
   92.00651,
   95.10322,
   105.1163,
   122.8143,
   142.6294,
   156.9103,
   180.5364,
   196.464,
   208.1342,
   208.3537};
   Double_t _fex1245[13] = {
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
   Double_t _fey1245[13] = {
   0.616909,
   0.6973625,
   0.7626335,
   0.7318057,
   0.753474,
   0.8363381,
   0.9917502,
   1.043465,
   1.2197,
   1.354477,
   1.472763,
   1.613388,
   1.914594};
   gre = new TGraphErrors(13,_fx1245,_fy1245,_fex1245,_fey1245);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1245 = new TH1F("Graph_Graph1245","",100,550,5950);
   Graph_Graph1245->SetMinimum(47.31705);
   Graph_Graph1245->SetMaximum(225.0821);
   Graph_Graph1245->SetDirectory(0);
   Graph_Graph1245->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1245->SetLineColor(ci);
   Graph_Graph1245->GetXaxis()->SetLabelFont(42);
   Graph_Graph1245->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1245->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1245->GetXaxis()->SetTitleFont(42);
   Graph_Graph1245->GetYaxis()->SetLabelFont(42);
   Graph_Graph1245->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1245->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1245->GetYaxis()->SetTitleFont(42);
   Graph_Graph1245->GetZaxis()->SetLabelFont(42);
   Graph_Graph1245->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1245->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1245->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1245);
   
   
   TF1 *SIGMA_func1246 = new TF1("SIGMA_func","pol6",1000,5500);
   SIGMA_func1246->SetBit(TF1::kNotDraw);
   SIGMA_func1246->SetFillColor(19);
   SIGMA_func1246->SetFillStyle(0);
   SIGMA_func1246->SetLineColor(2);
   SIGMA_func1246->SetLineWidth(2);
   SIGMA_func1246->SetChisquare(56.64827);
   SIGMA_func1246->SetNDF(6);
   SIGMA_func1246->GetXaxis()->SetLabelFont(42);
   SIGMA_func1246->GetXaxis()->SetLabelOffset(0.007);
   SIGMA_func1246->GetXaxis()->SetLabelSize(0.05);
   SIGMA_func1246->GetXaxis()->SetTitleSize(0.06);
   SIGMA_func1246->GetXaxis()->SetTitleOffset(0.9);
   SIGMA_func1246->GetXaxis()->SetTitleFont(42);
   SIGMA_func1246->GetYaxis()->SetLabelFont(42);
   SIGMA_func1246->GetYaxis()->SetLabelOffset(0.007);
   SIGMA_func1246->GetYaxis()->SetLabelSize(0.05);
   SIGMA_func1246->GetYaxis()->SetTitleSize(0.06);
   SIGMA_func1246->GetYaxis()->SetTitleOffset(1.25);
   SIGMA_func1246->GetYaxis()->SetTitleFont(42);
   SIGMA_func1246->SetParameter(0,168.3015);
   SIGMA_func1246->SetParError(0,40.34735);
   SIGMA_func1246->SetParLimits(0,0,0);
   SIGMA_func1246->SetParameter(1,-0.3540636);
   SIGMA_func1246->SetParError(1,0.1051971);
   SIGMA_func1246->SetParLimits(1,0,0);
   SIGMA_func1246->SetParameter(2,0.0004020768);
   SIGMA_func1246->SetParError(2,0.0001062225);
   SIGMA_func1246->SetParLimits(2,0,0);
   SIGMA_func1246->SetParameter(3,-1.987237e-07);
   SIGMA_func1246->SetParError(3,5.34412e-08);
   SIGMA_func1246->SetParLimits(3,0,0);
   SIGMA_func1246->SetParameter(4,5.079788e-11);
   SIGMA_func1246->SetParError(4,1.421775e-11);
   SIGMA_func1246->SetParLimits(4,0,0);
   SIGMA_func1246->SetParameter(5,-6.446526e-15);
   SIGMA_func1246->SetParError(5,1.908716e-15);
   SIGMA_func1246->SetParLimits(5,0,0);
   SIGMA_func1246->SetParameter(6,3.196658e-19);
   SIGMA_func1246->SetParError(6,1.016344e-19);
   SIGMA_func1246->SetParLimits(6,0,0);
   gre->GetListOfFunctions()->Add(SIGMA_func1246);
   gre->Draw("p");
   
   TF1 *SIGMA_func1247 = new TF1("SIGMA_func","pol6",0,13000);
   SIGMA_func1247->SetFillColor(19);
   SIGMA_func1247->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   SIGMA_func1247->SetMarkerColor(ci);
   SIGMA_func1247->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   SIGMA_func1247->SetLineColor(ci);
   SIGMA_func1247->SetLineWidth(3);
   SIGMA_func1247->SetChisquare(56.64827);
   SIGMA_func1247->SetNDF(6);
   SIGMA_func1247->GetXaxis()->SetLabelFont(42);
   SIGMA_func1247->GetXaxis()->SetLabelOffset(0.007);
   SIGMA_func1247->GetXaxis()->SetLabelSize(0.05);
   SIGMA_func1247->GetXaxis()->SetTitleSize(0.06);
   SIGMA_func1247->GetXaxis()->SetTitleOffset(0.9);
   SIGMA_func1247->GetXaxis()->SetTitleFont(42);
   SIGMA_func1247->GetYaxis()->SetLabelFont(42);
   SIGMA_func1247->GetYaxis()->SetLabelOffset(0.007);
   SIGMA_func1247->GetYaxis()->SetLabelSize(0.05);
   SIGMA_func1247->GetYaxis()->SetTitleSize(0.06);
   SIGMA_func1247->GetYaxis()->SetTitleOffset(1.25);
   SIGMA_func1247->GetYaxis()->SetTitleFont(42);
   SIGMA_func1247->SetParameter(0,168.3015);
   SIGMA_func1247->SetParError(0,40.34735);
   SIGMA_func1247->SetParLimits(0,0,0);
   SIGMA_func1247->SetParameter(1,-0.3540636);
   SIGMA_func1247->SetParError(1,0.1051971);
   SIGMA_func1247->SetParLimits(1,0,0);
   SIGMA_func1247->SetParameter(2,0.0004020768);
   SIGMA_func1247->SetParError(2,0.0001062225);
   SIGMA_func1247->SetParLimits(2,0,0);
   SIGMA_func1247->SetParameter(3,-1.987237e-07);
   SIGMA_func1247->SetParError(3,5.34412e-08);
   SIGMA_func1247->SetParLimits(3,0,0);
   SIGMA_func1247->SetParameter(4,5.079788e-11);
   SIGMA_func1247->SetParError(4,1.421775e-11);
   SIGMA_func1247->SetParLimits(4,0,0);
   SIGMA_func1247->SetParameter(5,-6.446526e-15);
   SIGMA_func1247->SetParError(5,1.908716e-15);
   SIGMA_func1247->SetParLimits(5,0,0);
   SIGMA_func1247->SetParameter(6,3.196658e-19);
   SIGMA_func1247->SetParError(6,1.016344e-19);
   SIGMA_func1247->SetParLimits(6,0,0);
   SIGMA_func1247->Draw("Csame");
   
   Double_t _fx1247[13] = {
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
   Double_t _fy1247[13] = {
   64.77166,
   70.87679,
   79.77623,
   96.02045,
   99.21168,
   108.6648,
   126.8395,
   150.6495,
   163.9661,
   185.5281,
   202.5913,
   213.9654,
   214.2324};
   Double_t _fex1247[13] = {
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
   Double_t _fey1247[13] = {
   0.2042773,
   0.2340979,
   0.2575196,
   0.2451808,
   0.2582149,
   0.2744523,
   0.3241061,
   0.3672044,
   0.4025899,
   0.4492836,
   1.510116,
   1.636715,
   1.852918};
   gre = new TGraphErrors(13,_fx1247,_fy1247,_fex1247,_fey1247);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1247 = new TH1F("Graph_Graph1247","",100,550,5950);
   Graph_Graph1247->SetMinimum(49.41559);
   Graph_Graph1247->SetMaximum(231.2371);
   Graph_Graph1247->SetDirectory(0);
   Graph_Graph1247->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1247->SetLineColor(ci);
   Graph_Graph1247->GetXaxis()->SetLabelFont(42);
   Graph_Graph1247->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1247->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1247->GetXaxis()->SetTitleFont(42);
   Graph_Graph1247->GetYaxis()->SetLabelFont(42);
   Graph_Graph1247->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1247->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1247->GetYaxis()->SetTitleFont(42);
   Graph_Graph1247->GetZaxis()->SetLabelFont(42);
   Graph_Graph1247->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1247->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1247->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1247);
   
   
   TF1 *SIGMA_func1248 = new TF1("SIGMA_func","pol6",1000,5500);
   SIGMA_func1248->SetBit(TF1::kNotDraw);
   SIGMA_func1248->SetFillColor(19);
   SIGMA_func1248->SetFillStyle(0);
   SIGMA_func1248->SetLineColor(2);
   SIGMA_func1248->SetLineWidth(2);
   SIGMA_func1248->SetChisquare(673.2342);
   SIGMA_func1248->SetNDF(6);
   SIGMA_func1248->GetXaxis()->SetLabelFont(42);
   SIGMA_func1248->GetXaxis()->SetLabelOffset(0.007);
   SIGMA_func1248->GetXaxis()->SetLabelSize(0.05);
   SIGMA_func1248->GetXaxis()->SetTitleSize(0.06);
   SIGMA_func1248->GetXaxis()->SetTitleOffset(0.9);
   SIGMA_func1248->GetXaxis()->SetTitleFont(42);
   SIGMA_func1248->GetYaxis()->SetLabelFont(42);
   SIGMA_func1248->GetYaxis()->SetLabelOffset(0.007);
   SIGMA_func1248->GetYaxis()->SetLabelSize(0.05);
   SIGMA_func1248->GetYaxis()->SetTitleSize(0.06);
   SIGMA_func1248->GetYaxis()->SetTitleOffset(1.25);
   SIGMA_func1248->GetYaxis()->SetTitleFont(42);
   SIGMA_func1248->SetParameter(0,125.8402);
   SIGMA_func1248->SetParError(0,15.54168);
   SIGMA_func1248->SetParLimits(0,0,0);
   SIGMA_func1248->SetParameter(1,-0.2443937);
   SIGMA_func1248->SetParError(1,0.04152959);
   SIGMA_func1248->SetParLimits(1,0,0);
   SIGMA_func1248->SetParameter(2,0.0002989157);
   SIGMA_func1248->SetParError(2,4.319278e-05);
   SIGMA_func1248->SetParLimits(2,0,0);
   SIGMA_func1248->SetParameter(3,-1.505138e-07);
   SIGMA_func1248->SetParError(3,2.248444e-08);
   SIGMA_func1248->SetParLimits(3,0,0);
   SIGMA_func1248->SetParameter(4,3.916465e-11);
   SIGMA_func1248->SetParError(4,6.211065e-12);
   SIGMA_func1248->SetParLimits(4,0,0);
   SIGMA_func1248->SetParameter(5,-5.067638e-15);
   SIGMA_func1248->SetParError(5,8.677676e-16);
   SIGMA_func1248->SetParLimits(5,0,0);
   SIGMA_func1248->SetParameter(6,2.564865e-19);
   SIGMA_func1248->SetParError(6,4.812295e-20);
   SIGMA_func1248->SetParLimits(6,0,0);
   gre->GetListOfFunctions()->Add(SIGMA_func1248);
   gre->Draw("p");
   
   TF1 *SIGMA_func1249 = new TF1("SIGMA_func","pol6",0,13000);
   SIGMA_func1249->SetFillColor(19);
   SIGMA_func1249->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   SIGMA_func1249->SetMarkerColor(ci);
   SIGMA_func1249->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   SIGMA_func1249->SetLineColor(ci);
   SIGMA_func1249->SetLineWidth(3);
   SIGMA_func1249->SetChisquare(673.2342);
   SIGMA_func1249->SetNDF(6);
   SIGMA_func1249->GetXaxis()->SetLabelFont(42);
   SIGMA_func1249->GetXaxis()->SetLabelOffset(0.007);
   SIGMA_func1249->GetXaxis()->SetLabelSize(0.05);
   SIGMA_func1249->GetXaxis()->SetTitleSize(0.06);
   SIGMA_func1249->GetXaxis()->SetTitleOffset(0.9);
   SIGMA_func1249->GetXaxis()->SetTitleFont(42);
   SIGMA_func1249->GetYaxis()->SetLabelFont(42);
   SIGMA_func1249->GetYaxis()->SetLabelOffset(0.007);
   SIGMA_func1249->GetYaxis()->SetLabelSize(0.05);
   SIGMA_func1249->GetYaxis()->SetTitleSize(0.06);
   SIGMA_func1249->GetYaxis()->SetTitleOffset(1.25);
   SIGMA_func1249->GetYaxis()->SetTitleFont(42);
   SIGMA_func1249->SetParameter(0,125.8402);
   SIGMA_func1249->SetParError(0,15.54168);
   SIGMA_func1249->SetParLimits(0,0,0);
   SIGMA_func1249->SetParameter(1,-0.2443937);
   SIGMA_func1249->SetParError(1,0.04152959);
   SIGMA_func1249->SetParLimits(1,0,0);
   SIGMA_func1249->SetParameter(2,0.0002989157);
   SIGMA_func1249->SetParError(2,4.319278e-05);
   SIGMA_func1249->SetParLimits(2,0,0);
   SIGMA_func1249->SetParameter(3,-1.505138e-07);
   SIGMA_func1249->SetParError(3,2.248444e-08);
   SIGMA_func1249->SetParLimits(3,0,0);
   SIGMA_func1249->SetParameter(4,3.916465e-11);
   SIGMA_func1249->SetParError(4,6.211065e-12);
   SIGMA_func1249->SetParLimits(4,0,0);
   SIGMA_func1249->SetParameter(5,-5.067638e-15);
   SIGMA_func1249->SetParError(5,8.677676e-16);
   SIGMA_func1249->SetParLimits(5,0,0);
   SIGMA_func1249->SetParameter(6,2.564865e-19);
   SIGMA_func1249->SetParError(6,4.812295e-20);
   SIGMA_func1249->SetParLimits(6,0,0);
   SIGMA_func1249->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("SIGMA_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("SIGMA_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("SIGMA_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("SIGMA_func","G_{B}#rightarrow ZZ","L");

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

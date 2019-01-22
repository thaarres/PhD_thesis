void Signal_mVV_ALPHA2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 14:34:10 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(390,-4.85567,5806.667,8.030928);
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
   
   TF1 *pol41026 = new TF1("pol4","pol4",0,13000);
   pol41026->SetBit(TF1::kNotDraw);
   pol41026->SetFillColor(19);
   pol41026->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   pol41026->SetMarkerColor(ci);
   pol41026->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol41026->SetLineColor(ci);
   pol41026->SetLineWidth(3);
   pol41026->SetChisquare(198.3876);
   pol41026->SetNDF(7);
   pol41026->GetXaxis()->SetTitle("M_{X} (GeV)");
   pol41026->GetXaxis()->SetRange(9,43);
   pol41026->GetXaxis()->SetNdivisions(209);
   pol41026->GetXaxis()->SetLabelFont(42);
   pol41026->GetXaxis()->SetLabelOffset(0.007);
   pol41026->GetXaxis()->SetLabelSize(0.05);
   pol41026->GetXaxis()->SetTitleSize(0.06);
   pol41026->GetXaxis()->SetTitleOffset(0.94);
   pol41026->GetXaxis()->SetTitleFont(42);
   pol41026->GetYaxis()->SetTitle("ALPHA2 (GeV)");
   pol41026->GetYaxis()->SetNdivisions(504);
   pol41026->GetYaxis()->SetLabelFont(42);
   pol41026->GetYaxis()->SetLabelOffset(0.007);
   pol41026->GetYaxis()->SetLabelSize(0.05);
   pol41026->GetYaxis()->SetTitleSize(0.06);
   pol41026->GetYaxis()->SetTitleOffset(0.97);
   pol41026->GetYaxis()->SetTitleFont(42);
   pol41026->SetParameter(0,4.173938);
   pol41026->SetParError(0,0.4878046);
   pol41026->SetParLimits(0,0,0);
   pol41026->SetParameter(1,-0.004601285);
   pol41026->SetParError(1,0.0007848665);
   pol41026->SetParLimits(1,0,0);
   pol41026->SetParameter(2,2.474233e-06);
   pol41026->SetParError(2,4.319039e-07);
   pol41026->SetParLimits(2,0,0);
   pol41026->SetParameter(3,-5.082941e-10);
   pol41026->SetParError(3,9.707718e-11);
   pol41026->SetParLimits(3,0,0);
   pol41026->SetParameter(4,3.656675e-14);
   pol41026->SetParError(4,7.630497e-15);
   pol41026->SetParLimits(4,0,0);
   pol41026->Draw("C");
   
   Double_t _fx1025[12] = {
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
   Double_t _fy1025[12] = {
   1.352577,
   1.601728,
   1.1064,
   1.693247,
   1.393973,
   1.447494,
   2.111705,
   2.382548,
   2.11476,
   2.180583,
   2.328271,
   2.673056};
   Double_t _fex1025[12] = {
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
   Double_t _fey1025[12] = {
   0.02700173,
   0.04054654,
   0.03562463,
   0.05141112,
   0.03274317,
   0.03227564,
   0.05682718,
   0.07477588,
   0.05714008,
   0.06295252,
   0.07167218,
   0.1067482};
   TGraphErrors *gre = new TGraphErrors(12,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","",100,770,5930);
   Graph_Graph1025->SetMinimum(0.8998726);
   Graph_Graph1025->SetMaximum(2.950708);
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
   
   
   TF1 *pol41026 = new TF1("pol4","pol4",1200,5500);
   pol41026->SetFillColor(19);
   pol41026->SetFillStyle(0);
   pol41026->SetLineColor(2);
   pol41026->SetLineWidth(2);
   pol41026->SetChisquare(198.3876);
   pol41026->SetNDF(7);
   pol41026->GetXaxis()->SetLabelFont(42);
   pol41026->GetXaxis()->SetLabelOffset(0.007);
   pol41026->GetXaxis()->SetLabelSize(0.05);
   pol41026->GetXaxis()->SetTitleSize(0.06);
   pol41026->GetXaxis()->SetTitleOffset(0.9);
   pol41026->GetXaxis()->SetTitleFont(42);
   pol41026->GetYaxis()->SetLabelFont(42);
   pol41026->GetYaxis()->SetLabelOffset(0.007);
   pol41026->GetYaxis()->SetLabelSize(0.05);
   pol41026->GetYaxis()->SetTitleSize(0.06);
   pol41026->GetYaxis()->SetTitleOffset(1.25);
   pol41026->GetYaxis()->SetTitleFont(42);
   pol41026->SetParameter(0,4.173938);
   pol41026->SetParError(0,0.4878046);
   pol41026->SetParLimits(0,0,0);
   pol41026->SetParameter(1,-0.004601285);
   pol41026->SetParError(1,0.0007848665);
   pol41026->SetParLimits(1,0,0);
   pol41026->SetParameter(2,2.474233e-06);
   pol41026->SetParError(2,4.319039e-07);
   pol41026->SetParLimits(2,0,0);
   pol41026->SetParameter(3,-5.082941e-10);
   pol41026->SetParError(3,9.707718e-11);
   pol41026->SetParLimits(3,0,0);
   pol41026->SetParameter(4,3.656675e-14);
   pol41026->SetParError(4,7.630497e-15);
   pol41026->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41026);
   gre->Draw("p");
   
   TF1 *pol41027 = new TF1("pol4","pol4",0,13000);
   pol41027->SetBit(TF1::kNotDraw);
   pol41027->SetFillColor(19);
   pol41027->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol41027->SetMarkerColor(ci);
   pol41027->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol41027->SetLineColor(ci);
   pol41027->SetLineWidth(3);
   pol41027->SetChisquare(198.3876);
   pol41027->SetNDF(7);
   pol41027->GetXaxis()->SetTitle("M_{X} (GeV)");
   pol41027->GetXaxis()->SetRange(9,43);
   pol41027->GetXaxis()->SetNdivisions(209);
   pol41027->GetXaxis()->SetLabelFont(42);
   pol41027->GetXaxis()->SetLabelOffset(0.007);
   pol41027->GetXaxis()->SetLabelSize(0.05);
   pol41027->GetXaxis()->SetTitleSize(0.06);
   pol41027->GetXaxis()->SetTitleOffset(0.94);
   pol41027->GetXaxis()->SetTitleFont(42);
   pol41027->GetYaxis()->SetTitle("ALPHA2 (GeV)");
   pol41027->GetYaxis()->SetNdivisions(504);
   pol41027->GetYaxis()->SetLabelFont(42);
   pol41027->GetYaxis()->SetLabelOffset(0.007);
   pol41027->GetYaxis()->SetLabelSize(0.05);
   pol41027->GetYaxis()->SetTitleSize(0.06);
   pol41027->GetYaxis()->SetTitleOffset(0.97);
   pol41027->GetYaxis()->SetTitleFont(42);
   pol41027->SetParameter(0,4.173938);
   pol41027->SetParError(0,0.4878046);
   pol41027->SetParLimits(0,0,0);
   pol41027->SetParameter(1,-0.004601285);
   pol41027->SetParError(1,0.0007848665);
   pol41027->SetParLimits(1,0,0);
   pol41027->SetParameter(2,2.474233e-06);
   pol41027->SetParError(2,4.319039e-07);
   pol41027->SetParLimits(2,0,0);
   pol41027->SetParameter(3,-5.082941e-10);
   pol41027->SetParError(3,9.707718e-11);
   pol41027->SetParLimits(3,0,0);
   pol41027->SetParameter(4,3.656675e-14);
   pol41027->SetParError(4,7.630497e-15);
   pol41027->SetParLimits(4,0,0);
   pol41027->Draw("Csame");
   
   Double_t _fx1027[12] = {
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
   Double_t _fy1027[12] = {
   1.155984,
   1.306872,
   0.95697,
   1.420132,
   1.21266,
   1.333452,
   1.892051,
   1.403286,
   1.972072,
   1.954956,
   1.421726,
   2.502631};
   Double_t _fex1027[12] = {
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
   Double_t _fey1027[12] = {
   0.02235577,
   0.02848755,
   0.02702714,
   0.03186174,
   0.02501405,
   0.02821411,
   0.04284202,
   0.02945994,
   0.04724994,
   0.04605713,
   0.03391431,
   0.08198039};
   gre = new TGraphErrors(12,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,770,5930);
   Graph_Graph1027->SetMinimum(0.764476);
   Graph_Graph1027->SetMaximum(2.750078);
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
   
   
   TF1 *pol41028 = new TF1("pol4","pol4",1200,5500);
   pol41028->SetFillColor(19);
   pol41028->SetFillStyle(0);
   pol41028->SetLineColor(2);
   pol41028->SetLineWidth(2);
   pol41028->SetChisquare(471.6024);
   pol41028->SetNDF(7);
   pol41028->GetXaxis()->SetLabelFont(42);
   pol41028->GetXaxis()->SetLabelOffset(0.007);
   pol41028->GetXaxis()->SetLabelSize(0.05);
   pol41028->GetXaxis()->SetTitleSize(0.06);
   pol41028->GetXaxis()->SetTitleOffset(0.9);
   pol41028->GetXaxis()->SetTitleFont(42);
   pol41028->GetYaxis()->SetLabelFont(42);
   pol41028->GetYaxis()->SetLabelOffset(0.007);
   pol41028->GetYaxis()->SetLabelSize(0.05);
   pol41028->GetYaxis()->SetTitleSize(0.06);
   pol41028->GetYaxis()->SetTitleOffset(1.25);
   pol41028->GetYaxis()->SetTitleFont(42);
   pol41028->SetParameter(0,3.395179);
   pol41028->SetParError(0,0.3445223);
   pol41028->SetParLimits(0,0,0);
   pol41028->SetParameter(1,-0.00387937);
   pol41028->SetParError(1,0.0005480396);
   pol41028->SetParLimits(1,0,0);
   pol41028->SetParameter(2,2.25655e-06);
   pol41028->SetParError(2,3.011528e-07);
   pol41028->SetParLimits(2,0,0);
   pol41028->SetParameter(3,-5.06659e-10);
   pol41028->SetParError(3,6.82026e-11);
   pol41028->SetParLimits(3,0,0);
   pol41028->SetParameter(4,3.935726e-14);
   pol41028->SetParError(4,5.427598e-15);
   pol41028->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41028);
   gre->Draw("p");
   
   TF1 *pol41029 = new TF1("pol4","pol4",0,13000);
   pol41029->SetBit(TF1::kNotDraw);
   pol41029->SetFillColor(19);
   pol41029->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol41029->SetMarkerColor(ci);
   pol41029->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol41029->SetLineColor(ci);
   pol41029->SetLineWidth(3);
   pol41029->SetChisquare(471.6024);
   pol41029->SetNDF(7);
   pol41029->GetXaxis()->SetLabelFont(42);
   pol41029->GetXaxis()->SetLabelOffset(0.007);
   pol41029->GetXaxis()->SetLabelSize(0.05);
   pol41029->GetXaxis()->SetTitleSize(0.06);
   pol41029->GetXaxis()->SetTitleOffset(0.9);
   pol41029->GetXaxis()->SetTitleFont(42);
   pol41029->GetYaxis()->SetLabelFont(42);
   pol41029->GetYaxis()->SetLabelOffset(0.007);
   pol41029->GetYaxis()->SetLabelSize(0.05);
   pol41029->GetYaxis()->SetTitleSize(0.06);
   pol41029->GetYaxis()->SetTitleOffset(1.25);
   pol41029->GetYaxis()->SetTitleFont(42);
   pol41029->SetParameter(0,3.395179);
   pol41029->SetParError(0,0.3445223);
   pol41029->SetParLimits(0,0,0);
   pol41029->SetParameter(1,-0.00387937);
   pol41029->SetParError(1,0.0005480396);
   pol41029->SetParLimits(1,0,0);
   pol41029->SetParameter(2,2.25655e-06);
   pol41029->SetParError(2,3.011528e-07);
   pol41029->SetParLimits(2,0,0);
   pol41029->SetParameter(3,-5.06659e-10);
   pol41029->SetParError(3,6.82026e-11);
   pol41029->SetParLimits(3,0,0);
   pol41029->SetParameter(4,3.935726e-14);
   pol41029->SetParError(4,5.427598e-15);
   pol41029->SetParLimits(4,0,0);
   pol41029->Draw("Csame");
   
   Double_t _fx1029[12] = {
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
   Double_t _fy1029[12] = {
   1.405373,
   1.642366,
   1.926327,
   2.283037,
   1.451193,
   1.500335,
   2.192226,
   1.580053,
   2.196753,
   1.129187,
   2.276295,
   2.099923};
   Double_t _fex1029[12] = {
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
   Double_t _fey1029[12] = {
   0.01913921,
   0.02829376,
   0.03219116,
   0.04385387,
   0.02235573,
   0.02372088,
   0.04302999,
   0.02534916,
   0.04309977,
   0.0149284,
   0.05562109,
   0.07247197};
   gre = new TGraphErrors(12,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,770,5930);
   Graph_Graph1029->SetMinimum(0.9924925);
   Graph_Graph1029->SetMaximum(2.453682);
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
   
   
   TF1 *pol41030 = new TF1("pol4","pol4",1200,5500);
   pol41030->SetFillColor(19);
   pol41030->SetFillStyle(0);
   pol41030->SetLineColor(2);
   pol41030->SetLineWidth(2);
   pol41030->SetChisquare(1395.924);
   pol41030->SetNDF(7);
   pol41030->GetXaxis()->SetLabelFont(42);
   pol41030->GetXaxis()->SetLabelOffset(0.007);
   pol41030->GetXaxis()->SetLabelSize(0.05);
   pol41030->GetXaxis()->SetTitleSize(0.06);
   pol41030->GetXaxis()->SetTitleOffset(0.9);
   pol41030->GetXaxis()->SetTitleFont(42);
   pol41030->GetYaxis()->SetLabelFont(42);
   pol41030->GetYaxis()->SetLabelOffset(0.007);
   pol41030->GetYaxis()->SetLabelSize(0.05);
   pol41030->GetYaxis()->SetTitleSize(0.06);
   pol41030->GetYaxis()->SetTitleOffset(1.25);
   pol41030->GetYaxis()->SetTitleFont(42);
   pol41030->SetParameter(0,2.678568);
   pol41030->SetParError(0,0.3048417);
   pol41030->SetParLimits(0,0,0);
   pol41030->SetParameter(1,-0.002555206);
   pol41030->SetParError(1,0.0004799532);
   pol41030->SetParLimits(1,0,0);
   pol41030->SetParameter(2,1.8647e-06);
   pol41030->SetParError(2,2.574892e-07);
   pol41030->SetParLimits(2,0,0);
   pol41030->SetParameter(3,-5.126097e-10);
   pol41030->SetParError(3,5.658632e-11);
   pol41030->SetParLimits(3,0,0);
   pol41030->SetParameter(4,4.643445e-14);
   pol41030->SetParError(4,4.378628e-15);
   pol41030->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41030);
   gre->Draw("p");
   
   TF1 *pol41031 = new TF1("pol4","pol4",0,13000);
   pol41031->SetBit(TF1::kNotDraw);
   pol41031->SetFillColor(19);
   pol41031->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol41031->SetMarkerColor(ci);
   pol41031->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol41031->SetLineColor(ci);
   pol41031->SetLineWidth(3);
   pol41031->SetChisquare(1395.924);
   pol41031->SetNDF(7);
   pol41031->GetXaxis()->SetLabelFont(42);
   pol41031->GetXaxis()->SetLabelOffset(0.007);
   pol41031->GetXaxis()->SetLabelSize(0.05);
   pol41031->GetXaxis()->SetTitleSize(0.06);
   pol41031->GetXaxis()->SetTitleOffset(0.9);
   pol41031->GetXaxis()->SetTitleFont(42);
   pol41031->GetYaxis()->SetLabelFont(42);
   pol41031->GetYaxis()->SetLabelOffset(0.007);
   pol41031->GetYaxis()->SetLabelSize(0.05);
   pol41031->GetYaxis()->SetTitleSize(0.06);
   pol41031->GetYaxis()->SetTitleOffset(1.25);
   pol41031->GetYaxis()->SetTitleFont(42);
   pol41031->SetParameter(0,2.678568);
   pol41031->SetParError(0,0.3048417);
   pol41031->SetParLimits(0,0,0);
   pol41031->SetParameter(1,-0.002555206);
   pol41031->SetParError(1,0.0004799532);
   pol41031->SetParLimits(1,0,0);
   pol41031->SetParameter(2,1.8647e-06);
   pol41031->SetParError(2,2.574892e-07);
   pol41031->SetParLimits(2,0,0);
   pol41031->SetParameter(3,-5.126097e-10);
   pol41031->SetParError(3,5.658632e-11);
   pol41031->SetParLimits(3,0,0);
   pol41031->SetParameter(4,4.643445e-14);
   pol41031->SetParError(4,4.378628e-15);
   pol41031->SetParLimits(4,0,0);
   pol41031->Draw("Csame");
   
   Double_t _fx1031[12] = {
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
   Double_t _fy1031[12] = {
   1.221123,
   1.496092,
   1.069023,
   1.604481,
   1.316189,
   1.42937,
   1.940233,
   1.476332,
   2.036564,
   2.051829,
   1.546115,
   1.732014};
   Double_t _fex1031[12] = {
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
   Double_t _fey1031[12] = {
   0.01794263,
   0.0240921,
   0.01990732,
   0.02792219,
   0.01881506,
   0.02134372,
   0.03052328,
   0.02341998,
   0.03606837,
   0.03658434,
   0.03177945,
   0.02626943};
   gre = new TGraphErrors(12,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","",100,770,5930);
   Graph_Graph1031->SetMinimum(0.9451858);
   Graph_Graph1031->SetMaximum(2.192343);
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
   
   
   TF1 *pol41032 = new TF1("pol4","pol4",1200,5500);
   pol41032->SetFillColor(19);
   pol41032->SetFillStyle(0);
   pol41032->SetLineColor(2);
   pol41032->SetLineWidth(2);
   pol41032->SetChisquare(700.4172);
   pol41032->SetNDF(7);
   pol41032->GetXaxis()->SetLabelFont(42);
   pol41032->GetXaxis()->SetLabelOffset(0.007);
   pol41032->GetXaxis()->SetLabelSize(0.05);
   pol41032->GetXaxis()->SetTitleSize(0.06);
   pol41032->GetXaxis()->SetTitleOffset(0.9);
   pol41032->GetXaxis()->SetTitleFont(42);
   pol41032->GetYaxis()->SetLabelFont(42);
   pol41032->GetYaxis()->SetLabelOffset(0.007);
   pol41032->GetYaxis()->SetLabelSize(0.05);
   pol41032->GetYaxis()->SetTitleSize(0.06);
   pol41032->GetYaxis()->SetTitleOffset(1.25);
   pol41032->GetYaxis()->SetTitleFont(42);
   pol41032->SetParameter(0,1.862814);
   pol41032->SetParError(0,0.2553608);
   pol41032->SetParLimits(0,0,0);
   pol41032->SetParameter(1,-0.001104912);
   pol41032->SetParError(1,0.0003981182);
   pol41032->SetParLimits(1,0,0);
   pol41032->SetParameter(2,6.3723e-07);
   pol41032->SetParError(2,2.134831e-07);
   pol41032->SetParLimits(2,0,0);
   pol41032->SetParameter(3,-1.206402e-10);
   pol41032->SetParError(3,4.697351e-11);
   pol41032->SetParLimits(3,0,0);
   pol41032->SetParameter(4,7.320797e-15);
   pol41032->SetParError(4,3.614405e-15);
   pol41032->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41032);
   gre->Draw("p");
   
   TF1 *pol41033 = new TF1("pol4","pol4",0,13000);
   pol41033->SetBit(TF1::kNotDraw);
   pol41033->SetFillColor(19);
   pol41033->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol41033->SetMarkerColor(ci);
   pol41033->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol41033->SetLineColor(ci);
   pol41033->SetLineWidth(3);
   pol41033->SetChisquare(700.4172);
   pol41033->SetNDF(7);
   pol41033->GetXaxis()->SetLabelFont(42);
   pol41033->GetXaxis()->SetLabelOffset(0.007);
   pol41033->GetXaxis()->SetLabelSize(0.05);
   pol41033->GetXaxis()->SetTitleSize(0.06);
   pol41033->GetXaxis()->SetTitleOffset(0.9);
   pol41033->GetXaxis()->SetTitleFont(42);
   pol41033->GetYaxis()->SetLabelFont(42);
   pol41033->GetYaxis()->SetLabelOffset(0.007);
   pol41033->GetYaxis()->SetLabelSize(0.05);
   pol41033->GetYaxis()->SetTitleSize(0.06);
   pol41033->GetYaxis()->SetTitleOffset(1.25);
   pol41033->GetYaxis()->SetTitleFont(42);
   pol41033->SetParameter(0,1.862814);
   pol41033->SetParError(0,0.2553608);
   pol41033->SetParLimits(0,0,0);
   pol41033->SetParameter(1,-0.001104912);
   pol41033->SetParError(1,0.0003981182);
   pol41033->SetParLimits(1,0,0);
   pol41033->SetParameter(2,6.3723e-07);
   pol41033->SetParError(2,2.134831e-07);
   pol41033->SetParLimits(2,0,0);
   pol41033->SetParameter(3,-1.206402e-10);
   pol41033->SetParError(3,4.697351e-11);
   pol41033->SetParLimits(3,0,0);
   pol41033->SetParameter(4,7.320797e-15);
   pol41033->SetParError(4,3.614405e-15);
   pol41033->SetParLimits(4,0,0);
   pol41033->Draw("Csame");
   
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
